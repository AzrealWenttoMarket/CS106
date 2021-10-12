#include "updateitemdialogue.h"
#include "ui_updateitemdialogue.h"

#include <QMessageBox>
#include <QFileDialog>

UpdateItemDialogue::UpdateItemDialogue(item* theItem, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateItemDialogue)
{
    ui->setupUi(this);

    this->theItem = theItem;

    if (theItem != nullptr)
    {
        ui->lblProductNameDisplay->setText(theItem->getName());
        ui->sbQuantity->setValue(theItem->getQuantity());

        QPixmap pixmap(theItem->getImageFilePath());
        ui->lblImageDisplay->setPixmap(pixmap);
        ui->lblImageDisplay->setScaledContents(true);
    }

    connect(ui->pbCofirmUpdate, &QPushButton::clicked, this, &UpdateItemDialogue::confirmUpdate);

    connect(ui->pushButton, &QPushButton::clicked, this, &UpdateItemDialogue::loadItemImage);
}

UpdateItemDialogue::~UpdateItemDialogue()
{
    delete ui;
}



void UpdateItemDialogue::confirmUpdate()
{
    int quantity = ui->sbQuantity->value();

    if (quantity >= 1)
    {
        theItem->setQuantity(quantity);
        theItem->setImageFilePath(imageFilePath);
        this->close();
    }
    else
    {
        QMessageBox mb;
        mb.setText("Quantity must be larger than 0");
        mb.exec();
    }
}

void UpdateItemDialogue::loadItemImage()
{
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this, "Open Image", "./", "Image File (*.png, *.jpg");

    if (fileName != "")
    {
        int lastSlash = fileName.lastIndexOf("/");

        QString shortName = fileName.right(fileName.size() - lastSlash -1);

        QFile::copy(fileName, "./images/" + shortName);
        QPixmap pixmap("./images/" + shortName);

        ui->lblImageDisplay->setPixmap(pixmap);
        ui->lblImageDisplay->setScaledContents(true);

        imageFilePath = "./images/" + shortName;
    }

}
