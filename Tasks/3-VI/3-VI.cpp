#include <iostream>
#include <Windows.h>
using namespace std;

double e = 0.0000001;

double function(double x, double a, double b)
{
	if (pow(x, 2) - 5 * x < -e) return a + b;
	if (pow(x, 2) - 5 * x >= e && pow(x, 2) - 5 * x < 10 - e) return a - b;
	if (pow(x, 2) - 5 * x >= 10) return a * b;
	return 0;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b, h;
	cout << "Введите значения A, B и H через пробел\n";
	cin >> a >> b >> h;
	cout << "Значение X\tЗначение функции\n";
	for (double i = a; i <= b; i += h)
	{
		cout << i << "\t\t" << function(i, a, b) << endl;
	}
} // погрешность