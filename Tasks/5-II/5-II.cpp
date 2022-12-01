#include <iostream>
using namespace std;

int main()
{
    int n;
    double x, sum = 0, pow_x;
    cin >> x >> n;
    pow_x = x;
    for (int i = 1; i <= n; i++)
    {
        sum += pow_x / pow(2 + 4 * (i - 1), 2);
        pow_x *= x * x;
    }
    cout << sum;
}