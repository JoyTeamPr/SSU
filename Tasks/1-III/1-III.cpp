#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, num;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите трехзначное число\n";
    cin >> num;
    b = num % 10;
    a = num / 10 % 10;
    if (a < b)
    {
        cout << "Число " << a << " меньше числа " << b << ". Значит вторая цифра числа меньше последней";
    }
    if (a == b)
    {
        cout << "Число " << a << " равно числу " << b << ". Значит вторая цифра числа равна последней";
    }
    if (a > b)
    {
        cout << "Число " << a << " больше числа " << b << ". Значит вторая цифра числа больше последней";
    }
}
