#include <vector>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"

static unsigned num;//Номер поточного нотатку

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow() {
    delete ui;
}

static std::vector<QString> note,archive,home,just_note,com_a,com_b,com_c,proj2;//Вектора з нотатків

void MainWindow::show_note(std::vector<QString>& note){//Функція для відображення вмісту вектора з нотатків
    QString tmp="";
    for(auto a:note)tmp+=a+"\n═════════════════════════════════════════════════\n";
    ui->textEdit->setText(tmp);
}

void MainWindow::on_actionAdd_triggered() {note.push_back(ui->textEdit->toPlainText());}//Додавання нотатку

void MainWindow::on_actionNew_triggered() {ui->textEdit->setText(QString());}//Очищення екрану

void MainWindow::on_actionAdd_to_archive_triggered()//Додавання нотатку в архів
{
    if(!note.empty()){
    archive.push_back(note[num]);
       auto tmp=note.begin();
       for(unsigned i=0;i<num;i++)tmp++;
       note.erase(tmp);
    }
}

void MainWindow::on_actionShow_note_triggered()   {if(!note.empty())ui->textEdit->setText(note[num]);}//Відобрання поточного нотатку

void MainWindow::on_actionAdd_in_home_triggered() {if(!note.empty())home.push_back(note[num]);}//Додавання нотатку в контексти

void MainWindow::on_actionproject2_triggered()    {if(!note.empty())proj2.push_back(note[num]);}

void MainWindow::on_actionComponent_A_triggered() {if(!note.empty())com_a.push_back(note[num]);}

void MainWindow::on_actionComponent_B_triggered() {if(!note.empty())com_b.push_back(note[num]);}

void MainWindow::on_actionComponent_C_triggered() {if(!note.empty())com_c.push_back(note[num]);}

void MainWindow::on_actionJust_note_triggered()   {if(!note.empty())just_note.push_back(note[num]);}

void MainWindow::on_actionNext_triggered()        {if(!note.empty())ui->textEdit->setText(note[num<note.size()-1?++num:num]);}//Збільшення номера поточного нотатку

void MainWindow::on_actionBack_triggered()        {if(!note.empty())ui->textEdit->setText(note[num>0?--num:num]);}//Зменшення номера поточного нотатку

void MainWindow::on_actionDelete_note_triggered()//Видалення поточного нотатку
{
    if(!note.empty()){
        auto tmp=note.begin();
        for(unsigned i=0;i<num;i++)tmp++;
        note.erase(tmp);
        if(num>0)--num;
    }
}

void MainWindow::on_actionShow_all_Note_triggered()     {show_note(note);}//Відображення контекстів

void MainWindow::on_actionShow_archive_triggered()      {show_note(archive);}

void MainWindow::on_actionShow_home_triggered()         {show_note(home);}

void MainWindow::on_actionShow_just_note_triggered()    {show_note(just_note);}

void MainWindow::on_actionshow_project2_triggered()     {show_note(proj2);}

void MainWindow::on_actionShow_component_A_triggered()  {show_note(com_a);}

void MainWindow::on_actionShow_component_B_triggered()  {show_note(com_b);}

void MainWindow::on_actionShow_component_C_triggered()  {show_note(com_c);}

void MainWindow::on_actionComponent_A_2_triggered()     {show_note(com_a);}

void MainWindow::on_actionSave_as_triggered()//Функція для збереження вмісту вектора з нотатків в окремый файл
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save as");
    QFile file(fileName);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }
    setWindowTitle("Марина Монтаг");
    QTextStream out(&file);
    QString tmp="";
    for(auto a:note)tmp+=a+"\n═════════════════════════════════════════════════\n";
    out << tmp;
    file.close();
}


