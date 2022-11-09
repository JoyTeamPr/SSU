#include <iostream>
#include <Windows.h>
using namespace std;

double function(int x)
{
	if (pow(x, 2) - 2 == 0 || pow(x, 3) - 1 < 0) return 'E';
	return (x + 4) / (pow(x, 2) - 2) + sqrt(pow(x, 3) - 1);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, h;
	cout << "Введите значение A, B и H через пробел\n";
	cin >> a >> b >> h;
	cout << "Значение X\tЗначение функции\n";
	for (; a <= b; a += h)
	{
		if (function(a) != 'E') cout << a << "\t\t" << function(a) << endl;
		else cout << a << "\t\t" << "Функция не определена\n";
	}
}