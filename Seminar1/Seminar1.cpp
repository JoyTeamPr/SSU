#include <iostream>
using namespace std;

int main()
{
    double r, p, a, b, c;
    const double PI = acos(-1, 0);
    cout << "Введите радиус";
    cin >> r;
    cout << "Длина окружности = " << 2 * PI * r << "\n" << "Площадь круга = " << PI * pow(r, 2);
    
    cout << "Введите три стороны через пробел";
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    cout << p;
}
