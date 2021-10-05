#ifndef ITEM_H
#define ITEM_H

#include <QString>



class item
{
private:
    QString name;
    int quantity;
    QString imageFilePath;
public:
    item(QString name, int quantity, QString imageFilePath = "none.png");

    void setName(QString name);
    void setQuantity(int quantity);
    void setImageFilePath(QString imageFilePath);

    QString getName() const;
    int getQuantity() const;
    QString getImageFilePath() const;
};

#endif // ITEM_H
