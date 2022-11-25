#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int n;
    double first = 1, second = 2, cup = 0;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите n\n";
    cin >> n;
    cout << first << ' ' << second << ' ';
    for (int i = 3; i <= n; i++)
    {
        cup = second;
        second = (i * first - second) / (i + 1);
        first = cup;
        cout << second << ' ';
    }
}
