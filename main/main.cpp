#include <iostream>
using namespace std;

int main()
{
    int a, b, flag = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        flag = 0;
        for (int d = i - 1; d > 1; d--)
        {
            if (i % d == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0) cout << i << ' ';
    }
}