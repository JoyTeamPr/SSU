#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int day;
	cout << "Укажите номер дня недели для записи к терапевту\n";
	cin >> day;
	switch (day)
	{
		case (1): cout << "В понедельник прием больных с 09:00 до 13:00"; break;
		case (2): cout << "Во вторник прием больных с 13:00 до 16:00"; break;
		case (3): cout << "В среду прием больных с 15:00 до 19:00"; break;
		case (4): cout << "В четверг прием больных с 11:00 до 13:00"; break;
		case (5): cout << "В пятницу прием больных с 12:00 до 17:00"; break;
		case (6): cout << "В субботу прием больных с 16:00 до 17:00"; break;
		case (7): cout << "В воскресенье выходной"; break;
		default:{
			cout << "Проверьте написания дня недели и повторите попытку\n";
			exit;
		}
	}
}