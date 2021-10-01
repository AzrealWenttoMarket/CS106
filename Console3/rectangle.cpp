#include "rectangle.h"

Rectangle::Rectangle()
{
    this->length = 1;
    this->width = 1;
}
Rectangle::Rectangle(int length, int width)
{
    this->length = length;
    this->width = width;
}

int Rectangle::getWidth() const
{
    return width;
}
int Rectangle::getLength() const
{
    return length;
}

void Rectangle::setWidth(int width)
{
    this->width = width;
}
void Rectangle::setLength(int length)
{
    this->length = length;
}

int Rectangle::area() const
{
    return length * width;
}
