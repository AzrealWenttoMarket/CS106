#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionNew_Product, &QAction::triggered, this, &MainWindow::handleMenuItemNew);


}

MainWindow::~MainWindow()
{
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



