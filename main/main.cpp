#include <iostream>
using namespace std;

int main()
{
	int n, m, list[10000], maxx[5000][5000], k = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> list[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < m; j++)
		{
			if (i < j)
			{
				maxx[k][i] = j;
				k++;
			}
			else if (i >= j)
			{
				maxx[k][i] = i;
				k++;
			}
		}
	}

}