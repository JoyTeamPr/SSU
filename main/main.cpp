#include <iostream>
using namespace std;

int main()
{
	int n, m, list[100][100], maxx[100][100], k = 0, end_i = 0, end_j = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> list[i][j];
		}
	}
	if (n == m && n == 1) cout << list[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (list[i][j] < list[i][j + 1] && abs(list[i][j + 1]) <= 10000)
			{
				maxx[i][k] = list[i][j + 1];
				k++;
				end_j++;
			}
			if (list[i][j] > list[i][j + 1] && abs(list[i][j + 1]) <= 10000)
			{
				maxx[i][k] = list[i][j];
				k++;
				end_j++;
			}
		}
		end_i++;
		k = 0;
	}
	for (int i = 0; i < end_i; i++)
	{
		for (int j = 0; j < end_j / end_i; j++)
		{
			cout << maxx[i][j] << ' ';
		}
		cout << endl;
	}
}