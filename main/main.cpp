#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    double a, b;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите значения a и b\n";
    cin >> a >> b;
    cout << "Результат = " << (pow(a, 2) + pow(b, 2)) / (1 - ((pow(a, 3) - b) / 3));
}
