#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int list[1000], n, k, deleted = 0, cnt = 0, a, b;
	cout << "Введите количество символов в массиве\n";
	cin >> n;
	cout << "Введите массив\n";
	for (int i = 0; i < n; i++)
	{
		cin >> list[i];
	}
	cout << "Введите a и b\n";
	cin >> a >> b;
	for (int i = 0; cnt < n; i++)
	{
		cnt++;
		if (list[i] >= a && list[i] <= b)
		{
			k = i;
			while (k < n)
			{
				list[k] = list[k + 1];
				k++;
			}
			deleted++;
			i--;
		}
	}
	for (int i = 0; i < n - deleted; i++)
	{
		cout << list[i] << ' ';
	}
}

//int main()
//{
//	SetConsoleOutputCP(1251);
//	int list[1000], n, k, added = 0, cnt = 0, a, buff, list_added[1000];
//	cout << "Введите количество символов в массиве\n";
//	cin >> n;
//	cout << "Введите массив\n";
//	for (int i = 0; i < n; i++)
//	{
//		cin >> list[i];
//	}
//	cout << "Введите a\n";
//	cin >> a;
//	for (int i = 0; cnt < n; i++)
//	{
//		cnt++;
//		if (list[i] == a)
//		{
//			k = i;
//			while (k < n + added)
//			{
//				buff = list[k + 1];
//				list[k + 1] = list[k];
//				list[k + 2] = buff;
//				k++;
//			}
//			added++;
//			i += 2;
//		}
//	}
//	for (int i = 0; i < n + added; i++)
//	{
//		cout << list[i] << ' ';
//	}
//}