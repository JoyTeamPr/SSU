#include <iostream>
#include <Windows.h>
using namespace std;

double e = 0.0000001;

double function(double x)
{
	if (abs(pow(x, 2) - 2) < e || pow(x, 3) - 1 < -e) return 'E';
	return (x + 4) / (pow(x, 2) - 2) + sqrt(pow(x, 3) - 1);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b, h;
	cout << "Введите значение A, B и H через пробел\n";
	cin >> a >> b >> h;
	cout << "Значение X\tЗначение функции\n";
	for (; a <= b + e; a += h)
	{
		if (function(a) != 'E') cout << a << "\t\t" << function(a) << endl;
		else cout << a << "\t\t" << "Функция не определена\n";
	}
} // погрешность