/********************************************************************************
** Form generated from reading UI file 'updateitemdialogue.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEITEMDIALOGUE_H
#define UI_UPDATEITEMDIALOGUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_UpdateItemDialogue
{
public:
    QLabel *lblProductName;
    QLabel *lblProductNameDisplay;
    QLabel *lblQuantity;
    QSpinBox *sbQuantity;
    QLabel *lblImage;
    QLabel *lblImageDisplay;
    QPushButton *pbCofirmUpdate;
    QPushButton *pushButton;

    void setupUi(QDialog *UpdateItemDialogue)
    {
        if (UpdateItemDialogue->objectName().isEmpty())
            UpdateItemDialogue->setObjectName(QString::fromUtf8("UpdateItemDialogue"));
        UpdateItemDialogue->resize(400, 465);
        lblProductName = new QLabel(UpdateItemDialogue);
        lblProductName->setObjectName(QString::fromUtf8("lblProductName"));
        lblProductName->setGeometry(QRect(30, 30, 71, 16));
        lblProductNameDisplay = new QLabel(UpdateItemDialogue);
        lblProductNameDisplay->setObjectName(QString::fromUtf8("lblProductNameDisplay"));
        lblProductNameDisplay->setGeometry(QRect(110, 30, 281, 21));
        lblProductNameDisplay->setFrameShape(QFrame::Box);
        lblQuantity = new QLabel(UpdateItemDialogue);
        lblQuantity->setObjectName(QString::fromUtf8("lblQuantity"));
        lblQuantity->setGeometry(QRect(30, 70, 71, 16));
        sbQuantity = new QSpinBox(UpdateItemDialogue);
        sbQuantity->setObjectName(QString::fromUtf8("sbQuantity"));
        sbQuantity->setGeometry(QRect(110, 70, 281, 22));
        sbQuantity->setMinimum(1);
        sbQuantity->setMaximum(999);
        lblImage = new QLabel(UpdateItemDialogue);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(30, 110, 47, 13));
        lblImageDisplay = new QLabel(UpdateItemDialogue);
        lblImageDisplay->setObjectName(QString::fromUtf8("lblImageDisplay"));
        lblImageDisplay->setGeometry(QRect(90, 110, 301, 301));
        lblImageDisplay->setFrameShape(QFrame::Box);
        pbCofirmUpdate = new QPushButton(UpdateItemDialogue);
        pbCofirmUpdate->setObjectName(QString::fromUtf8("pbCofirmUpdate"));
        pbCofirmUpdate->setGeometry(QRect(250, 430, 141, 23));
        pushButton = new QPushButton(UpdateItemDialogue);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 140, 75, 23));

        retranslateUi(UpdateItemDialogue);

        QMetaObject::connectSlotsByName(UpdateItemDialogue);
    } // setupUi

    void retranslateUi(QDialog *UpdateItemDialogue)
    {
        UpdateItemDialogue->setWindowTitle(QApplication::translate("UpdateItemDialogue", "Dialog", nullptr));
        lblProductName->setText(QApplication::translate("UpdateItemDialogue", "Product Name:", nullptr));
        lblProductNameDisplay->setText(QString());
        lblQuantity->setText(QApplication::translate("UpdateItemDialogue", "Quantity:", nullptr));
        lblImage->setText(QApplication::translate("UpdateItemDialogue", "Image:", nullptr));
        lblImageDisplay->setText(QString());
        pbCofirmUpdate->setText(QApplication::translate("UpdateItemDialogue", "Confirm and Update", nullptr));
        pushButton->setText(QApplication::translate("UpdateItemDialogue", "Load Image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateItemDialogue: public Ui_UpdateItemDialogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEITEMDIALOGUE_H
