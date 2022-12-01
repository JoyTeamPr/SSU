#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    /*double first = 1, second = 2, third;
    int n;
    cout << "1. Введите n\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << first << ' ';
        third = second / (first + 1);
        first = second;
        second = third;
    }*/

    /*double a = 0, pow_x, x;
    int n, n_fact = 1;
    cout << "2. Введите n и x\n";
    cin >> n >> x;
    pow_x = x;
    for (int i = 1; i <= n; i++)
    {
        n_fact *= i;
        pow_x *= x * x;
        a += n_fact * pow_x;
    }
    cout << a << ' ';*/

    // что-то не выходит...
    /*double a = 1, pow_x, x, e, sum = 0;
    int n_fact = 2, i = 1;
    cout << "3. Введите x и e\n";
    cin >> x >> e;
    pow_x = x * x;
    while (abs(a) >= e || a == 0.0)
    {
        n_fact *= 2 * i;
        a = i * (i - 1) * (pow_x / n_fact);
        a += sum;
        pow_x *= x * x;
        i++;
    }
    cout << sum << ' ';*/
}

