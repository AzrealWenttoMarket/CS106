#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include "item.h"
#include "additemdialogue.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void handleMenuItemNew();
    void removeSelectedProduct();
    void handleItemClicked();
    void handleMenuItemEdit();
    void leaveApplication();
    void handleLoadItems();
    void handleSaveItems();
    void handleFindItem();



private slots:
    void on_lstProduct_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    QVector<item*> productList;
    QString imageFilePath;

};
#endif // MAINWINDOW_H
