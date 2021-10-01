/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionLoad;
    QAction *actionNew_Folder;
    QAction *actionNew_Project;
    QAction *actionSave_Open;
    QAction *actionSave_As_Open;
    QAction *actionOpen_Folder;
    QAction *actionOpen_Project;
    QAction *actionOpen_With;
    QAction *actionExit;
    QAction *actionSave_and_Exit;
    QWidget *centralwidget;
    QLabel *lblName;
    QLabel *lblAge;
    QLineEdit *leName;
    QLabel *lblImage;
    QLabel *lblImageBox;
    QPushButton *pbAdd;
    QPushButton *pbCancel;
    QSpinBox *spinBox;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuNew;
    QMenu *menuOpen;
    QMenu *menuEdit;
    QMenu *menuExit;
    QMenu *menuTools;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionNew_Folder = new QAction(MainWindow);
        actionNew_Folder->setObjectName(QString::fromUtf8("actionNew_Folder"));
        actionNew_Project = new QAction(MainWindow);
        actionNew_Project->setObjectName(QString::fromUtf8("actionNew_Project"));
        actionSave_Open = new QAction(MainWindow);
        actionSave_Open->setObjectName(QString::fromUtf8("actionSave_Open"));
        actionSave_As_Open = new QAction(MainWindow);
        actionSave_As_Open->setObjectName(QString::fromUtf8("actionSave_As_Open"));
        actionOpen_Folder = new QAction(MainWindow);
        actionOpen_Folder->setObjectName(QString::fromUtf8("actionOpen_Folder"));
        actionOpen_Project = new QAction(MainWindow);
        actionOpen_Project->setObjectName(QString::fromUtf8("actionOpen_Project"));
        actionOpen_With = new QAction(MainWindow);
        actionOpen_With->setObjectName(QString::fromUtf8("actionOpen_With"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionSave_and_Exit = new QAction(MainWindow);
        actionSave_and_Exit->setObjectName(QString::fromUtf8("actionSave_and_Exit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lblName = new QLabel(centralwidget);
        lblName->setObjectName(QString::fromUtf8("lblName"));
        lblName->setGeometry(QRect(50, 70, 47, 13));
        lblAge = new QLabel(centralwidget);
        lblAge->setObjectName(QString::fromUtf8("lblAge"));
        lblAge->setGeometry(QRect(50, 110, 47, 13));
        leName = new QLineEdit(centralwidget);
        leName->setObjectName(QString::fromUtf8("leName"));
        leName->setGeometry(QRect(130, 70, 261, 20));
        lblImage = new QLabel(centralwidget);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(50, 190, 47, 13));
        lblImageBox = new QLabel(centralwidget);
        lblImageBox->setObjectName(QString::fromUtf8("lblImageBox"));
        lblImageBox->setGeometry(QRect(140, 192, 371, 361));
        lblImageBox->setFrameShape(QFrame::Panel);
        lblImageBox->setFrameShadow(QFrame::Raised);
        pbAdd = new QPushButton(centralwidget);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));
        pbAdd->setGeometry(QRect(560, 530, 75, 23));
        pbCancel = new QPushButton(centralwidget);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));
        pbCancel->setGeometry(QRect(650, 530, 75, 23));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(130, 110, 81, 22));
        spinBox->setMinimum(18);
        spinBox->setMaximum(65);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuNew = new QMenu(menuFile);
        menuNew->setObjectName(QString::fromUtf8("menuNew"));
        menuOpen = new QMenu(menuFile);
        menuOpen->setObjectName(QString::fromUtf8("menuOpen"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuExit = new QMenu(menubar);
        menuExit->setObjectName(QString::fromUtf8("menuExit"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuExit->menuAction());
        menubar->addAction(menuTools->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionLoad);
        menuFile->addAction(menuNew->menuAction());
        menuFile->addAction(menuOpen->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuFile->addAction(actionSave_and_Exit);
        menuNew->addAction(actionNew_Folder);
        menuNew->addAction(actionNew_Project);
        menuOpen->addAction(actionSave_Open);
        menuOpen->addAction(actionSave_As_Open);
        menuOpen->addAction(actionOpen_Folder);
        menuOpen->addAction(actionOpen_Project);
        menuOpen->addAction(actionOpen_With);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", nullptr));
        actionLoad->setText(QApplication::translate("MainWindow", "Load", nullptr));
        actionNew_Folder->setText(QApplication::translate("MainWindow", "New Folder", nullptr));
        actionNew_Project->setText(QApplication::translate("MainWindow", "New Project", nullptr));
        actionSave_Open->setText(QApplication::translate("MainWindow", "Save and Open", nullptr));
        actionSave_As_Open->setText(QApplication::translate("MainWindow", "Save As and Open", nullptr));
        actionOpen_Folder->setText(QApplication::translate("MainWindow", "Open Folder", nullptr));
        actionOpen_Project->setText(QApplication::translate("MainWindow", "Open Project", nullptr));
        actionOpen_With->setText(QApplication::translate("MainWindow", "Open With", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        actionSave_and_Exit->setText(QApplication::translate("MainWindow", "Save and Exit", nullptr));
        lblName->setText(QApplication::translate("MainWindow", "Name", nullptr));
        lblAge->setText(QApplication::translate("MainWindow", "Age:", nullptr));
        leName->setText(QString());
        lblImage->setText(QApplication::translate("MainWindow", "Image:", nullptr));
        lblImageBox->setText(QString());
        pbAdd->setText(QApplication::translate("MainWindow", "Add", nullptr));
        pbCancel->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuNew->setTitle(QApplication::translate("MainWindow", "New", nullptr));
        menuOpen->setTitle(QApplication::translate("MainWindow", "Open", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuExit->setTitle(QApplication::translate("MainWindow", "View", nullptr));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
