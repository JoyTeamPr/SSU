#include <iostream>
#include <iomanip>
using namespace std;

double function(double a)
{
	if (a != -1) return 1 / pow(1 + a, 2);
	else return 0;
}

int main()
{
	double a, b, h;
	cin >> a >> b >> h;
	for (double i = a; i <= b; i += h)
	{
		if (function(i) != 0) cout << fixed << setprecision(6) << i << '\t' << function(i) << endl;
		else cout << fixed << setprecision(6) << i << '\t' << "undefined" << endl;
	}
}