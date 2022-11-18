#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, y;
    cout << "Пожалуйста, введите значения x и y через пробел\n";
    cin >> x >> y;
    if (sqrt(x * x + y * y) <= 7 && sqrt(x * x + y * y) >= 3)
    {
        cout << "Точка с координатами (" << x << ", " << y << ") попадает в область";
        if (sqrt(x * x + y * y) == 7 && sqrt(x * x + y * y) == 3)
        {
            cout << "Точка с координатами (" << x << ", " << y << ") попадает в область";
        }
    }
    else
    {
        cout << "Точка с координатами (" << x << ", " << y << ") не попадает в область";
    }
}
