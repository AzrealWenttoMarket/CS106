#include <QTextStream>
#include <QVector>
#include "rectangle.h"

void printVector(QVector<Rectangle*>&rectangles);
void deleteVector(QVector<Rectangle*>&rectangles);

QTextStream cout (stdout);
QTextStream cin (stdin);
QVector <Rectangle*> rectangles;

int main()
{
    rectangles.push_back(new Rectangle());
    rectangles.push_back(new Rectangle(7, 8));
    rectangles.push_back(new Rectangle(20, 10));

    cout << "List of rectangles: " << endl;

    printVector(rectangles);

    cout.flush();
    return 0;
}

void printVector(QVector<Rectangle*>&rectangles)
{
    for (auto r : rectangles)
    {
        cout << r->area() << endl;
    }

    deleteVector(rectangles);
}

void deleteVector(QVector<Rectangle*>&rectangles)
{
    for (auto r : rectangles)
    {
        delete r;
    }
}
