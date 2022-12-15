#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    int n;
    int minn = 100000;
    bool flag = false;
    cout << "Введите n\n";
    cin >> n;
    int list[100][100];
    cout << "Введите последовательность\n";
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            cin >> list[a][b];
        }
    }
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            if (list[a][b] == list[b][a]) continue;
            else
            {
                cout << "No";
                exit(1);
            }
        }
    }
    cout << "Yes";
}