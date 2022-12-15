#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    double n;
    int list[100][100], maxx[100], max_ = -1000;
    cout << "Введите n\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> list[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (list[j][i] > max_) max_ = list[j][i];
        }
        maxx[i] = max_;
        max_ = -1000;
    }
    for (int j = 0; j < n; j++)
    {
        cout << maxx[j] << ' ';
    }
}
