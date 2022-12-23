#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    cout << "Дополнительное домашнее задание 2\n";
    SetConsoleOutputCP(1251);
    int n, a, list[100], k = 0, x, sum = 0, mult = 1;
    cout << "1. Введите количество чисел\n";
    cin >> n;
    cout << "Введите числа через пробел или enter\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a / 10 % 2 + a % 10 % 2 != 0)
        {
            list[k] = a;
            k++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << list[i] << ' ';
    }
    cout << endl;
    
    cout << "2. Введите количество камней\n";
    cin >> n;
    cout << "Вводите сколько камней забрать из кучи\n";
    while (n > 0)
    {
        cin >> x;
        if (n - x < 0)
        {
            cout << "Этот ход невозможно сделать. Сейчас в куче " << n << " камней.\n";
            continue;
        }
        if (n - x == 0) break;
        n -= x;
    }
    cout << "Камни кончились!\n";

    cout << "3. Введите количество чисел\n";
    cin >> n;
    cout << "Вводите числа через пробел или enter\n";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
        mult *= x;
    }
    cout << "Сумма: " << sum << "\nПроизведение: " << mult;
}
