#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    system("color E1");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string last_name;
    cout << "Введіть прізвище: ";
    getline(cin, last_name);

    string first_name;
    cout << "Введіть ім'я: ";
    getline(cin, first_name);

    int age;
    cout << "Введіть вік: ";
    cin >> age;

    cin.ignore();

    string faculty;
    cout << "Введіть факультет: ";
    getline(cin, faculty);

    string group;
    cout << "Введіть групу: ";
    getline(cin, group);

    int course;
    cout << "Введіть курс: ";
    cin >> course;
    cin.ignore();

    cout << "\nВаші дані:" << endl;
    cout << "Прізвище: " << last_name << endl;
    cout << "Ім'я: " << first_name << endl;
    cout << "Вік: " << age << endl;
    cout << "Факультет: " << faculty << endl;
    cout << "Група: " << group << endl;
    cout << "Курс: " << course << endl;

    return 0;
}