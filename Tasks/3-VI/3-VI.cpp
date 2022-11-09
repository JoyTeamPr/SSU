#include <iostream>
#include <Windows.h>
using namespace std;

double function(int x, int a, int b)
{
	if (pow(x, 2) - 5 * x < 0) return a + b;
	if (pow(x, 2) - 5 * x >= 0 && pow(x, 2) - 5 * x < 10) return a - b;
	if (pow(x, 2) - 5 * x >= 10) return a * b;
	return 0;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, h;
	cout << "Введите значения A, B и H через пробел\n";
	cin >> a >> b >> h;
	cout << "Значение X\tЗначение функции\n";
	for (int i = a; i <= b; i += h)
	{
		cout << i << "\t\t" << function(i, a, b) << endl;
	}
}