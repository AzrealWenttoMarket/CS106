#include "updateitemdialogue.h"
#include "ui_updateitemdialogue.h"

UpdateItemDialogue::UpdateItemDialogue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateItemDialogue)
{
    ui->setupUi(this);
}

UpdateItemDialogue::~UpdateItemDialogue()
{
    delete ui;
}
