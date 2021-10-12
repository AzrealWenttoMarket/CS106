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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Product;
    QAction *actionSave;
    QAction *actionLoad;
    QAction *actionExit;
    QAction *actionEdit;
    QAction *actionLeave;
    QAction *actionSearch;
    QWidget *centralwidget;
    QLabel *lblName;
    QLabel *lblQuantity;
    QLabel *itemImage;
    QLabel *nameBox;
    QLabel *quantityBox;
    QPushButton *pbDeleteSelected;
    QListWidget *lstProduct;
    QLabel *lblQuantity_2;
    QLineEdit *leSearch;
    QPushButton *pbSearch;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(769, 640);
        actionNew_Product = new QAction(MainWindow);
        actionNew_Product->setObjectName(QString::fromUtf8("actionNew_Product"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName(QString::fromUtf8("actionEdit"));
        actionLeave = new QAction(MainWindow);
        actionLeave->setObjectName(QString::fromUtf8("actionLeave"));
        actionSearch = new QAction(MainWindow);
        actionSearch->setObjectName(QString::fromUtf8("actionSearch"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lblName = new QLabel(centralwidget);
        lblName->setObjectName(QString::fromUtf8("lblName"));
        lblName->setGeometry(QRect(410, 60, 47, 13));
        lblQuantity = new QLabel(centralwidget);
        lblQuantity->setObjectName(QString::fromUtf8("lblQuantity"));
        lblQuantity->setGeometry(QRect(410, 110, 47, 16));
        itemImage = new QLabel(centralwidget);
        itemImage->setObjectName(QString::fromUtf8("itemImage"));
        itemImage->setGeometry(QRect(440, 180, 321, 321));
        itemImage->setFrameShape(QFrame::Box);
        itemImage->setLineWidth(2);
        nameBox = new QLabel(centralwidget);
        nameBox->setObjectName(QString::fromUtf8("nameBox"));
        nameBox->setGeometry(QRect(470, 55, 281, 21));
        nameBox->setFrameShape(QFrame::Box);
        quantityBox = new QLabel(centralwidget);
        quantityBox->setObjectName(QString::fromUtf8("quantityBox"));
        quantityBox->setGeometry(QRect(470, 106, 281, 21));
        quantityBox->setFrameShape(QFrame::Box);
        pbDeleteSelected = new QPushButton(centralwidget);
        pbDeleteSelected->setObjectName(QString::fromUtf8("pbDeleteSelected"));
        pbDeleteSelected->setGeometry(QRect(230, 570, 321, 23));
        lstProduct = new QListWidget(centralwidget);
        lstProduct->setObjectName(QString::fromUtf8("lstProduct"));
        lstProduct->setGeometry(QRect(10, 40, 351, 501));
        lblQuantity_2 = new QLabel(centralwidget);
        lblQuantity_2->setObjectName(QString::fromUtf8("lblQuantity_2"));
        lblQuantity_2->setGeometry(QRect(380, 180, 47, 16));
        leSearch = new QLineEdit(centralwidget);
        leSearch->setObjectName(QString::fromUtf8("leSearch"));
        leSearch->setGeometry(QRect(230, 10, 281, 21));
        pbSearch = new QPushButton(centralwidget);
        pbSearch->setObjectName(QString::fromUtf8("pbSearch"));
        pbSearch->setGeometry(QRect(510, 10, 41, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 769, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew_Product);
        menuFile->addAction(actionExit);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionLeave);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "StoreInventoryApp", nullptr));
        actionNew_Product->setText(QApplication::translate("MainWindow", "New Product", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionLoad->setText(QApplication::translate("MainWindow", "Load", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        actionEdit->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        actionLeave->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        actionSearch->setText(QApplication::translate("MainWindow", "Search", nullptr));
        lblName->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Name</span></p></body></html>", nullptr));
        lblQuantity->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Quantity</span></p></body></html>", nullptr));
        itemImage->setText(QString());
        nameBox->setText(QString());
        quantityBox->setText(QString());
        pbDeleteSelected->setText(QApplication::translate("MainWindow", "Delete Selected Product", nullptr));
        lblQuantity_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Image:</span></p></body></html>", nullptr));
        pbSearch->setText(QApplication::translate("MainWindow", "Search", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
