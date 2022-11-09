#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, x, y;
    string loop;
    cout << "Введите числа A и B через пробел\n";
    cin >> a >> b;
    cout << "Введите, каким циклом выполнить алгоритм (while, dowhile, for)\n";
    cin >> loop;
    cout << "Теперь введите числа X и Y\n";
    cin >> x >> y;
    cout << "Ниже представлены числа, оканчивающиеся на " << x << " и " << y;
    cout << ", на диапозоне от " << a << " до " << b << endl;

    if (loop == "while")
    {
        while (b - a >= 0)
        {
            if (a % 10 == x || a % 10 == y)
            {
                cout << a << " ";
            }
            a++;
        }
    }
    
    if (loop == "dowhile")
    {
        do
        {
            if (a % 10 == x || a % 10 == y)
            {
                cout << a << " ";
            }
            a++;
        } while (b - a >= 0);
    }
    
    if (loop == "for")
    {
        for (; b - a >= 0; a++)
        {
            if (a % 10 == x || a % 10 == y)
            {
                cout << a << " ";
            }
        }
    }
}
