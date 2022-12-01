#include <iostream>
#include <iomanip>
using namespace std;

double function(double a)
{
	return 1 / pow(1 + a, 2);
}

int main()
{
	double a, b, h, e = 0.000000001;
	cin >> a >> b >> h;
	for (double i = a; i <= b + e; i += h)
	{
		if (i != -1 || abs(i - e) <= 1) cout << fixed << setprecision(6) << i << '\t' << function(i) << endl;
		else cout << fixed << setprecision(6) << i << '\t' << "undefined" << endl;
	}
}