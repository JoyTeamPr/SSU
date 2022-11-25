#include <iostream>
using namespace std;

int main()
{
    int n;
    double x, sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += pow(x, 2 * (i - 1)) / pow(2 + 4 * (i - 1), 2);
    }
}
