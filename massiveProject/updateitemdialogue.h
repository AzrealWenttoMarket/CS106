#ifndef UPDATEITEMDIALOGUE_H
#define UPDATEITEMDIALOGUE_H

#include <QDialog>

namespace Ui {
class UpdateItemDialogue;
}

class UpdateItemDialogue : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateItemDialogue(QWidget *parent = nullptr);
    ~UpdateItemDialogue();

private:
    Ui::UpdateItemDialogue *ui;
};

#endif // UPDATEITEMDIALOGUE_H
