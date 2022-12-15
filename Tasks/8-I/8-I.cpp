#include <iostream>
#include <Windows.h>
using namespace std;

bool is_prost(int a)
{
    if (a == 1 || a <= 0) return false;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0) return false;
    }
    return true;
}

int main()
{
    SetConsoleOutputCP(1251);
    int a, b;
    cout << "Введите a и b\n";
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (is_prost(i)) cout << i << ' ';
    }
}