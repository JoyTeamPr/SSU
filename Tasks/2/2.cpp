#include <iostream>
#include <Windows.h>
using namespace std;

int function(int num)
{
    if (num % 5 == 0) return num / 5;
    else return num + 1;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    cout << "Вводите числа по одному\n";
    while (true)
    {
        cin >> a;
        cout << function(a) << endl << endl;
    }
}
