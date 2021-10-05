#ifndef ADDITEMDIALOGUE_H
#define ADDITEMDIALOGUE_H

#include <QDialog>
#include "item.h"
namespace Ui {
class AddItemDialogue;
}

class AddItemDialogue : public QDialog
{
    Q_OBJECT

public:
    explicit AddItemDialogue(item*& newItem, QWidget *parent = nullptr);
    ~AddItemDialogue();

    void confirmAdd();
    void loadItemImage();

private:
    Ui::AddItemDialogue *ui;
    item** newItem;
    QString imageFilePath;
};

#endif // ADDITEMDIALOGUE_H
