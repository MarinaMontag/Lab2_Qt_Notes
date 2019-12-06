/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd;
    QAction *actionNew;
    QAction *actionAdd_to_archive;
    QAction *actionShow_all_Note;
    QAction *actionShow_note;
    QAction *actionShow_archive;
    QAction *actionAdd_in_home;
    QAction *actionproject2;
    QAction *actionComponent_A;
    QAction *actionComponent_B;
    QAction *actionComponent_C;
    QAction *actionJust_note;
    QAction *actionDelete_note;
    QAction *actionShow_home;
    QAction *actionShow_just_note;
    QAction *actionshow_project2;
    QAction *actionShow_component_A;
    QAction *actionShow_component_B;
    QAction *actionShow_component_C;
    QAction *actionNext;
    QAction *actionBack;
    QAction *actionComponent_A_2;
    QAction *actionSave_as;
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuAdd_in_work;
    QMenu *menuproject1;
    QMenu *menuShow_work;
    QMenu *menushow_project1;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(408, 304);
        MainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/imgs/Add_16x16.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd->setIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/imgs/DeleteSticky.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionAdd_to_archive = new QAction(MainWindow);
        actionAdd_to_archive->setObjectName(QString::fromUtf8("actionAdd_to_archive"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imgs/imgs/Archive_16x16.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_to_archive->setIcon(icon2);
        actionShow_all_Note = new QAction(MainWindow);
        actionShow_all_Note->setObjectName(QString::fromUtf8("actionShow_all_Note"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imgs/imgs/Open_16x16.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_all_Note->setIcon(icon3);
        actionShow_note = new QAction(MainWindow);
        actionShow_note->setObjectName(QString::fromUtf8("actionShow_note"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imgs/imgs/Open.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_note->setIcon(icon4);
        actionShow_archive = new QAction(MainWindow);
        actionShow_archive->setObjectName(QString::fromUtf8("actionShow_archive"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/imgs/imgs/Save.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_archive->setIcon(icon5);
        actionAdd_in_home = new QAction(MainWindow);
        actionAdd_in_home->setObjectName(QString::fromUtf8("actionAdd_in_home"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/imgs/imgs/Home.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_in_home->setIcon(icon6);
        actionproject2 = new QAction(MainWindow);
        actionproject2->setObjectName(QString::fromUtf8("actionproject2"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/imgs/imgs/testing.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionproject2->setIcon(icon7);
        actionComponent_A = new QAction(MainWindow);
        actionComponent_A->setObjectName(QString::fromUtf8("actionComponent_A"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/imgs/imgs/solvent.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionComponent_A->setIcon(icon8);
        actionComponent_B = new QAction(MainWindow);
        actionComponent_B->setObjectName(QString::fromUtf8("actionComponent_B"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/imgs/imgs/bold.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionComponent_B->setIcon(icon9);
        actionComponent_C = new QAction(MainWindow);
        actionComponent_C->setObjectName(QString::fromUtf8("actionComponent_C"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/imgs/imgs/copyright.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionComponent_C->setIcon(icon10);
        actionJust_note = new QAction(MainWindow);
        actionJust_note->setObjectName(QString::fromUtf8("actionJust_note"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/imgs/imgs/Just note.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionJust_note->setIcon(icon11);
        actionDelete_note = new QAction(MainWindow);
        actionDelete_note->setObjectName(QString::fromUtf8("actionDelete_note"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/imgs/imgs/Delete_16x16.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_note->setIcon(icon12);
        actionShow_home = new QAction(MainWindow);
        actionShow_home->setObjectName(QString::fromUtf8("actionShow_home"));
        actionShow_home->setIcon(icon6);
        actionShow_just_note = new QAction(MainWindow);
        actionShow_just_note->setObjectName(QString::fromUtf8("actionShow_just_note"));
        actionShow_just_note->setIcon(icon11);
        actionshow_project2 = new QAction(MainWindow);
        actionshow_project2->setObjectName(QString::fromUtf8("actionshow_project2"));
        actionshow_project2->setIcon(icon7);
        actionShow_component_A = new QAction(MainWindow);
        actionShow_component_A->setObjectName(QString::fromUtf8("actionShow_component_A"));
        actionShow_component_A->setIcon(icon8);
        actionShow_component_B = new QAction(MainWindow);
        actionShow_component_B->setObjectName(QString::fromUtf8("actionShow_component_B"));
        actionShow_component_B->setIcon(icon9);
        actionShow_component_C = new QAction(MainWindow);
        actionShow_component_C->setObjectName(QString::fromUtf8("actionShow_component_C"));
        actionShow_component_C->setIcon(icon10);
        actionNext = new QAction(MainWindow);
        actionNext->setObjectName(QString::fromUtf8("actionNext"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/imgs/imgs/Stock Index Up_16x16.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionNext->setIcon(icon13);
        actionBack = new QAction(MainWindow);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/imgs/imgs/Stock Index Down_16x16.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionBack->setIcon(icon14);
        actionComponent_A_2 = new QAction(MainWindow);
        actionComponent_A_2->setObjectName(QString::fromUtf8("actionComponent_A_2"));
        actionComponent_A_2->setIcon(icon8);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/imgs/imgs/sav.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon15);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setCursor(QCursor(Qt::PointingHandCursor));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 381, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 408, 20));
        menuBar->setCursor(QCursor(Qt::PointingHandCursor));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuAdd_in_work = new QMenu(menuEdit);
        menuAdd_in_work->setObjectName(QString::fromUtf8("menuAdd_in_work"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/imgs/imgs/Work.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        menuAdd_in_work->setIcon(icon16);
        menuproject1 = new QMenu(menuAdd_in_work);
        menuproject1->setObjectName(QString::fromUtf8("menuproject1"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/imgs/imgs/presentation.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        menuproject1->setIcon(icon17);
        menuShow_work = new QMenu(menuEdit);
        menuShow_work->setObjectName(QString::fromUtf8("menuShow_work"));
        menuShow_work->setIcon(icon16);
        menushow_project1 = new QMenu(menuShow_work);
        menushow_project1->setObjectName(QString::fromUtf8("menushow_project1"));
        menushow_project1->setIcon(icon17);
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionAdd);
        menuFile->addAction(actionNew);
        menuFile->addAction(actionShow_all_Note);
        menuFile->addAction(actionAdd_to_archive);
        menuFile->addAction(actionShow_archive);
        menuFile->addAction(actionShow_note);
        menuFile->addAction(actionNext);
        menuFile->addAction(actionBack);
        menuFile->addAction(actionDelete_note);
        menuFile->addAction(actionSave_as);
        menuEdit->addAction(menuAdd_in_work->menuAction());
        menuEdit->addAction(actionJust_note);
        menuEdit->addAction(actionAdd_in_home);
        menuEdit->addAction(menuShow_work->menuAction());
        menuEdit->addAction(actionShow_just_note);
        menuEdit->addAction(actionShow_home);
        menuAdd_in_work->addAction(menuproject1->menuAction());
        menuAdd_in_work->addAction(actionproject2);
        menuproject1->addAction(actionComponent_A_2);
        menuproject1->addAction(actionComponent_B);
        menuproject1->addAction(actionComponent_C);
        menuShow_work->addAction(menushow_project1->menuAction());
        menuShow_work->addAction(actionshow_project2);
        menushow_project1->addAction(actionShow_component_A);
        menushow_project1->addAction(actionShow_component_B);
        menushow_project1->addAction(actionShow_component_C);
        mainToolBar->addAction(actionAdd);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionShow_all_Note);
        mainToolBar->addAction(actionAdd_to_archive);
        mainToolBar->addAction(actionShow_archive);
        mainToolBar->addAction(actionShow_note);
        mainToolBar->addAction(actionNext);
        mainToolBar->addAction(actionBack);
        mainToolBar->addAction(actionDelete_note);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSave_as);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Notepad", nullptr));
        actionAdd->setText(QApplication::translate("MainWindow", "Add", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "Clear", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("MainWindow", "Clear", nullptr));
#endif // QT_NO_TOOLTIP
        actionAdd_to_archive->setText(QApplication::translate("MainWindow", "Add to archive", nullptr));
        actionShow_all_Note->setText(QApplication::translate("MainWindow", "Show all note", nullptr));
        actionShow_note->setText(QApplication::translate("MainWindow", "Show note", nullptr));
        actionShow_archive->setText(QApplication::translate("MainWindow", "Show archive", nullptr));
        actionAdd_in_home->setText(QApplication::translate("MainWindow", "Add in home", nullptr));
        actionproject2->setText(QApplication::translate("MainWindow", "project2", nullptr));
        actionComponent_A->setText(QApplication::translate("MainWindow", "Component A", nullptr));
        actionComponent_B->setText(QApplication::translate("MainWindow", "Component B", nullptr));
        actionComponent_C->setText(QApplication::translate("MainWindow", "Component C", nullptr));
        actionJust_note->setText(QApplication::translate("MainWindow", "Add in just note", nullptr));
        actionDelete_note->setText(QApplication::translate("MainWindow", "Delete note", nullptr));
        actionShow_home->setText(QApplication::translate("MainWindow", "Show home", nullptr));
        actionShow_just_note->setText(QApplication::translate("MainWindow", "Show just note", nullptr));
        actionshow_project2->setText(QApplication::translate("MainWindow", "show project2", nullptr));
        actionShow_component_A->setText(QApplication::translate("MainWindow", "Show component A", nullptr));
        actionShow_component_B->setText(QApplication::translate("MainWindow", "Show component B", nullptr));
        actionShow_component_C->setText(QApplication::translate("MainWindow", "Show component C", nullptr));
        actionNext->setText(QApplication::translate("MainWindow", "Next", nullptr));
        actionBack->setText(QApplication::translate("MainWindow", "Back", nullptr));
        actionComponent_A_2->setText(QApplication::translate("MainWindow", "Component A", nullptr));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Contexts", nullptr));
        menuAdd_in_work->setTitle(QApplication::translate("MainWindow", "Add in work", nullptr));
        menuproject1->setTitle(QApplication::translate("MainWindow", "project1", nullptr));
        menuShow_work->setTitle(QApplication::translate("MainWindow", "Show work", nullptr));
        menushow_project1->setTitle(QApplication::translate("MainWindow", "show project1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
