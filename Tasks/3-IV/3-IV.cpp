#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	for (; i <= 5; i++)
	{
		int k = 0;
		for (int j = 0; j + 1 <= i; j++)
		{
			cout << i << ' ';
		}
		cout << endl;
		while (k < i)
		{
			cout << 0 << ' ';
			k++;
		}
		cout << endl;
	}
}