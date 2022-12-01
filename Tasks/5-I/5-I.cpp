#include <iostream>
using namespace std;

int main()
{
    int n;
    double x, sum = 0, pow_x;
    cin >> n >> x;
    pow_x = x;
    for (int i = 1; i <= n; i++)
    {
        sum += (2 * i - 1) * pow_x;
        pow_x *= x * x;
    }
    cout << sum;
}
