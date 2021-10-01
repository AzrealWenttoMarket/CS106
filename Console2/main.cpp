#include <QTextStream>
#include <QString>

QTextStream cout(stdout);
QTextStream cin(stdin);

void printMessage(QString& str);
int main()
{

    QString str;

    cout << "Please enter name: " << endl;
    str = cin.readLine();
    printMessage(str);

    cout.flush();
    return 0;
}

void printMessage(QString& str)
{
    cout << "Welcome " << str << endl;
}
