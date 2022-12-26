#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int n, m, list[105][105], requested = -1, buff, added = 0;
	bool flag = false;
	cout << "Введите размеры массива\n";
	cin >> n >> m;
	cout << "Введите массив\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> list[i][j];
		}
	}
	for (int i = 0; i < n + added; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (list[i][j] != 0) continue;
			else flag = true;
		}
		if (flag == false)
		{
			added++;
			requested = i;
			for (int k = 0; k < m; k++)
			{
				buff = list[requested + 2][k];
				list[requested + 2][k] = list[requested + 1][k];
				list[requested + 1][k] = 0;
				list[requested + 3][k] = buff;
			}
		}
		flag = false;
	}
	cout << "Вывод:\n";
	if (requested != -1)
	{
		for (int i = 0; i < n + added; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << list[i][j] << ' ';
			}
			cout << endl;
		}
	}
}