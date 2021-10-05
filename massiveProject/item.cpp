#include "item.h"

item::item(QString name, int quantity, QString imageFilePath)
{
    this->name = name;
    this->quantity = quantity;
    this->imageFilePath = imageFilePath;
}

void item::setName(QString name)
{
    this->name = name;
}
void item::setQuantity(int quantity)
{
    this->quantity = quantity;
}
void item::setImageFilePath(QString imageFilePath)
{
    this->imageFilePath = imageFilePath;
}

QString item::getName() const
{
    return name;
}
int item::getQuantity() const
{
    return quantity;
}
QString item::getImageFilePath() const
{
    return imageFilePath;
}
