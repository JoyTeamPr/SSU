#include <iostream>
using namespace std;

int main()
{
	double e = 0.001, a = 1, sum = 0;
	int i = 1, fact_i = 1;
	while (abs(a) >= e)
	{
		a = 2. / fact_i;
		fact_i *= i;
		sum += a;
		i++;
	}
	cout << sum;
}