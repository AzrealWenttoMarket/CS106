#ifndef UPDATEITEMDIALOGUE_H
#define UPDATEITEMDIALOGUE_H

#include <QDialog>
#include "item.h"
#include <QString>

namespace Ui {
class UpdateItemDialogue;
}

class UpdateItemDialogue : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateItemDialogue(item* theItem, QWidget *parent = nullptr);
    ~UpdateItemDialogue();

    void confirmUpdate();
    void loadItemImage();

private:
    Ui::UpdateItemDialogue *ui;
    item* theItem;
    QString imageFilePath;
};

#endif // UPDATEITEMDIALOGUE_H
