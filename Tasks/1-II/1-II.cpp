#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main()
{
    double a, b;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите значение катетов a и b\n";
    cin >> a >> b;
    cout << fixed << setprecision(4) << "Периметр прямоугольного треугольника = " << sqrt((pow(a, 2) + pow(b, 2))) + a + b;
}
