#include <iostream>
#include <Windows.h>
using namespace std;

// Анна Андреевна! Меня не было на прошлом семинаре и домашнее задание мне прислали фотографией. Однако я не обратил
// внимание на рисунок и, следовательно, выполнил неверно. Если так можно, то я могу дома переделать и загрузить в эту же папку
// ещё один файл!

double a(double s)
{
	return sqrt(4 * s / sqrt(3));
}

double hypotenuse(double a)
{
	return sqrt(a * a + a * a);
}

bool isZero(double &num)
{
	if (num == 0)
	{
		return false;
	}
	else return true;
}

double pluss(double f, double s)
{
	return (f + s);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double s, cathet, num, first, second;
	cout << "1. a) Введите площадь равностороннего треугольника\n";
	cin >> s;
	cout << "Сторона этого треугольника равна " << a(s) << endl;
	cout << "   б) Введите катет равнобедренного треугольника\n";
	cin >> cathet;
	cout << "Гипотенуза этого треугольника равна " << hypotenuse(cathet) << endl;
	cout << "   в) Непонятно. \n"; // уточнить на семинаре
	cout << "3. Введите а\n";
	cin >> num;
	if (isZero(num))
	{
		cout << num << " = 0";
	}
	else cout << num << " не равно 0";
	cout << "4. Введите два числа\n";
	cin >> first >> second;
	cout << pluss(first, second);
}