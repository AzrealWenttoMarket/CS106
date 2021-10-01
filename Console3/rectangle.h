#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
private:
    int width;
    int length;
public:
    Rectangle();
    Rectangle(int length, int width);

    int getWidth() const;
    int getLength() const;

    void setWidth(int width);
    void setLength(int length);

    int area() const;
};

#endif // RECTANGLE_H
