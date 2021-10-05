/********************************************************************************
** Form generated from reading UI file 'additemdialogue.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEMDIALOGUE_H
#define UI_ADDITEMDIALOGUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddItemDialogue
{
public:
    QLabel *lblProductName;
    QLabel *lblProductQuantity;
    QLabel *lblProductImage;
    QSpinBox *sbQuantity;
    QLineEdit *leName;
    QLabel *lblImage;
    QPushButton *pbAddImage;
    QPushButton *pbConfirmAdd;

    void setupUi(QDialog *AddItemDialogue)
    {
        if (AddItemDialogue->objectName().isEmpty())
            AddItemDialogue->setObjectName(QString::fromUtf8("AddItemDialogue"));
        AddItemDialogue->resize(389, 468);
        lblProductName = new QLabel(AddItemDialogue);
        lblProductName->setObjectName(QString::fromUtf8("lblProductName"));
        lblProductName->setGeometry(QRect(20, 30, 47, 13));
        lblProductQuantity = new QLabel(AddItemDialogue);
        lblProductQuantity->setObjectName(QString::fromUtf8("lblProductQuantity"));
        lblProductQuantity->setGeometry(QRect(20, 70, 47, 13));
        lblProductImage = new QLabel(AddItemDialogue);
        lblProductImage->setObjectName(QString::fromUtf8("lblProductImage"));
        lblProductImage->setGeometry(QRect(20, 110, 47, 13));
        sbQuantity = new QSpinBox(AddItemDialogue);
        sbQuantity->setObjectName(QString::fromUtf8("sbQuantity"));
        sbQuantity->setGeometry(QRect(90, 70, 291, 22));
        sbQuantity->setMinimum(1);
        sbQuantity->setMaximum(999);
        leName = new QLineEdit(AddItemDialogue);
        leName->setObjectName(QString::fromUtf8("leName"));
        leName->setGeometry(QRect(90, 30, 291, 20));
        lblImage = new QLabel(AddItemDialogue);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(90, 110, 291, 291));
        lblImage->setFrameShape(QFrame::Box);
        pbAddImage = new QPushButton(AddItemDialogue);
        pbAddImage->setObjectName(QString::fromUtf8("pbAddImage"));
        pbAddImage->setGeometry(QRect(20, 130, 61, 23));
        pbConfirmAdd = new QPushButton(AddItemDialogue);
        pbConfirmAdd->setObjectName(QString::fromUtf8("pbConfirmAdd"));
        pbConfirmAdd->setGeometry(QRect(270, 420, 111, 23));

        retranslateUi(AddItemDialogue);

        QMetaObject::connectSlotsByName(AddItemDialogue);
    } // setupUi

    void retranslateUi(QDialog *AddItemDialogue)
    {
        AddItemDialogue->setWindowTitle(QApplication::translate("AddItemDialogue", "Dialog", nullptr));
        lblProductName->setText(QApplication::translate("AddItemDialogue", "Name:", nullptr));
        lblProductQuantity->setText(QApplication::translate("AddItemDialogue", "Quantity", nullptr));
        lblProductImage->setText(QApplication::translate("AddItemDialogue", "Image:", nullptr));
        lblImage->setText(QString());
        pbAddImage->setText(QApplication::translate("AddItemDialogue", "Add Image", nullptr));
        pbConfirmAdd->setText(QApplication::translate("AddItemDialogue", "Confirm and Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddItemDialogue: public Ui_AddItemDialogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMDIALOGUE_H
