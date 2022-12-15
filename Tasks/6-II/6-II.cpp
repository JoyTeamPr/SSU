#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    int n;
    int minn = 100000;
    cout << "Введите длину массива\n";
    cin >> n;
    int* list = new int[n];
    cout << "Введите последовательность\n";
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (list[i] < minn) minn = list[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (list[i] == minn) list[i] = -list[i];
        cout << list[i] << ' ';
    }
}