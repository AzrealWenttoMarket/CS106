#include <QTextStream>
#include <QString>

int main()
{
    QTextStream cout(stdout);
    QTextStream cin(stdin);
    QString str;
    int age;

    cout << "Please enter your name: " << endl;
    str = cin.readLine();

    cout << "Howdy " << str << endl;
    cout << "Please enter age: " << endl;

    cin >> age;

    if (age >= 20)
    {
        cout << "You can drink, drive, vote and go to the casino (please be responsible and dont drink and drive <3)" << endl;
    }
    else if(age >= 18)
    {
        cout << "You can drink and vote, as well as drive." << endl;
    }
    else if (age >= 16)
    {
        cout << "You can drive and have a sprite." << endl;
    }
    else
    {
        cout << "Just... just have a sprite my guy." << endl;
    }

    cout.flush();
    return 0;
}
