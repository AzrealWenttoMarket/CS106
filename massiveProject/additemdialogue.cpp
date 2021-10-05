#include "additemdialogue.h"
#include "ui_additemdialogue.h"
#include <QDir>
#include <QMessageBox>
#include <QFileDialog>

AddItemDialogue::AddItemDialogue( item*& newItem, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddItemDialogue)
{
    ui->setupUi(this);

    this->newItem = &newItem;
    imageFilePath = "none.png";

    // signals and slots
    // connects signal with slot
    connect(ui->pbConfirmAdd, &QPushButton::clicked, this, &AddItemDialogue::confirmAdd);
    connect(ui->pbAddImage, &QPushButton::clicked, this, &AddItemDialogue::loadItemImage);

    // initialize QDir
    QDir pathDir("./images");
    if (!pathDir.exists())
    {
        //creat folder
        QDir().mkdir("./images");
    }
}

AddItemDialogue::~AddItemDialogue()
{
    delete ui;
}

void AddItemDialogue::confirmAdd()
{
    QString productName = ui->leName->text();
    int quantity = ui->sbQuantity->value();

    if(productName.trimmed() != "" && quantity >= 1)
    {
        *newItem = new item(productName, quantity, imageFilePath);
        this->close();
    }
    else
    {
        QMessageBox mb;
        mb.setText("You must enter a valid name and/or quantity.");
        mb.exec();
    }
}

void AddItemDialogue::loadItemImage()
{
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this, "Open Image", "./", "Image File (*.png, *.jpg, *.gif");

    if (fileName != " ")
    {
        int lastSlash = fileName.lastIndexOf("/");

        QString shortName = fileName.right(fileName.size() - lastSlash -1);

        QFile::copy(fileName, "./images/" + shortName);
        QPixmap pixmap("./images/" + shortName);

        ui->lblImage->setPixmap(pixmap);
        ui->lblImage->setScaledContents(true);

        imageFilePath = "./images/" + shortName;
    }

}






