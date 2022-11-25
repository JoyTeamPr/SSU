#include <iostream>
using namespace std;

int main()
{
    int n;
    double x, sum = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        sum += (2 * i - 1) * pow(x, 2 * i - 1);
    }
    cout << sum;
}
