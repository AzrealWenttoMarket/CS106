#include <QTextStream>
#include <QFile>
#include <QString>

int main()
{
    QFile outputFile("output.txt");
    QFile inputFile("output.txt");
    QString str;

    outputFile.open(QIODevice::WriteOnly | QIODevice::Text);

    QTextStream out (&outputFile);
    QTextStream in (&inputFile);
    QTextStream cout (stdout);
    QTextStream cin (stdin);

    out << "Jimbob" << endl;
    out << "Bobo the Clown" << endl;
    out << "John" << endl;
    out << "Haleigh" << endl;
    out << "Alexander the Great" << endl;
    cout << "Please enter your name: " << endl;
    str = cin.readLine();
    out << str << endl;

    out.flush();
    outputFile.close();

    inputFile.open(QIODevice::ReadOnly | QIODevice::Text);

    while (!in.atEnd())
    {
        QString line = in.readLine();
        cout << line << endl;
    }

    cout.flush();
    inputFile.close();

    return 0;
}
