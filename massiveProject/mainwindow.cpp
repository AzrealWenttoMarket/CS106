#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "updateitemdialogue.h"
#include "additemdialogue.h"

#include <QFile>
#include <QMessageBox>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    handleLoadItems();
    ui->lstProduct->setCurrentRow(0);
    handleItemClicked();

    connect(ui->actionNew_Product, &QAction::triggered, this, &MainWindow::handleMenuItemNew);

    connect(ui->pbDeleteSelected, &QPushButton::clicked, this, &MainWindow::removeSelectedProduct);

    connect(ui->lstProduct, &QListWidget::itemClicked, this, &MainWindow::handleItemClicked);

    connect(ui->actionExit, &QAction::triggered, this, &MainWindow::handleMenuItemEdit);

    connect(ui->actionLeave, &QAction::triggered, this, &MainWindow::leaveApplication);

    connect(ui->actionSave, &QAction::triggered, this, &MainWindow::handleSaveItems);

    connect(ui->actionLoad, &QAction::triggered, this, &MainWindow::handleLoadItems);

    connect(ui->pbSearch, &QPushButton::clicked, this, &MainWindow::handleFindItem);


}

MainWindow::~MainWindow()
{
    for (int i = 0; i < productList.size(); i++)
    {
        delete productList.at(i);
    }
    productList.clear();

    delete ui;
}

void MainWindow::handleMenuItemNew()
{
    item* newItem = nullptr;
    AddItemDialogue addItemDialogue(newItem, nullptr);
    addItemDialogue.setModal(true);
    addItemDialogue.exec();

    if (newItem != nullptr)
    {
        productList.push_back(newItem);
        ui->lstProduct->addItem(newItem->getName());
    }
}

void MainWindow::removeSelectedProduct()
{
    int index = ui->lstProduct->currentRow();

    if (index >= 0)
    {
        item* theItem = productList.at(index);
        delete theItem;
        productList.removeAt(index);

        delete ui->lstProduct->currentItem();
    }

    ui->nameBox->setText("");
    ui->quantityBox->setText("");
    QPixmap pixmap("none.png");
    ui->itemImage->setPixmap(pixmap);
    ui->itemImage->setScaledContents(true);
}


void MainWindow::handleItemClicked()
{
    int index = ui->lstProduct->currentRow();

    if (index >= 0)
    {
        item* theItem = productList.at(index);
        ui->nameBox->setText(theItem->getName());
        ui->quantityBox->setText(QString::number(theItem->getQuantity()));
        QPixmap pixmap(theItem->getImageFilePath());
        ui->itemImage->setPixmap(pixmap);
        ui->itemImage->setScaledContents(true);
    }
}

void MainWindow::handleMenuItemEdit()
{
    int index = ui->lstProduct->currentRow();

    if(index >= 0)
    {
        item* theItem = productList.at(index);

        if (theItem != nullptr)
        {
            UpdateItemDialogue updateItemDialogue(theItem, nullptr);
            updateItemDialogue.exec();

            // update ui
            ui->nameBox->setText(theItem->getName());
            ui->quantityBox->setText(QString::number(theItem->getQuantity()));

            QPixmap pixmap(theItem->getImageFilePath());
            ui->itemImage->setPixmap(pixmap);
            ui->itemImage->setScaledContents(true);
        }
    }
}

void MainWindow::leaveApplication()
{
    close();
    qApp->quit();
}


void MainWindow::handleSaveItems()
{
    QFile outputFile("ProductList.txt");
    outputFile.open(QIODevice::WriteOnly | QIODevice::Text);

    QTextStream out(&outputFile);
    for (int i = 0; i < productList.size(); i++)
    {
        out << productList.at(i)->getName()<<",";
        out << productList.at(i)->getQuantity() << ",";
        out << productList.at(i)->getImageFilePath() << endl;
    }

    QMessageBox mb;
    mb.setText("Items saved!");
    mb.exec();

    out.flush();
    outputFile.close();
}

void MainWindow::handleLoadItems()
{
    QFile inputFile("ProductList.txt");
    inputFile.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&inputFile);

    ui->lstProduct->clear();

    for (int i = 0; i < productList.size(); i++)
    {
        delete productList.at(i);
    }
    productList.clear();

    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList info = line.split(",");

        ui->lstProduct->addItem(info.at(0));
        item* temp = new item(info.at(0), info.at(1).toInt(), info.at(2));
        productList.push_back(temp);
    }

    in.flush();
    inputFile.close();
}

void MainWindow::handleFindItem()
{
    QString search = ui->leSearch->text();
    if (search != "")
    {
        for(int i = 0; i < ui->lstProduct->count(); i++)
        {
            QListWidgetItem* item = ui->lstProduct->item(i);
            item->setBackground(Qt::white);
        }
        QList<QListWidgetItem *> list = ui->lstProduct->findItems(search, Qt::MatchContains);


        for (QListWidgetItem *item : list)
        {
            item->setBackground(Qt::gray);
        }
    }
    else
    {
        for(int i = 0; i < ui->lstProduct->count(); i++)
        {
            QListWidgetItem* item = ui->lstProduct->item(i);
            item->setBackground(Qt::white);
        }
    }
}









