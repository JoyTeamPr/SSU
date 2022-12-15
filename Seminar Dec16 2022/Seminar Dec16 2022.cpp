#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    int n, m, fib[1000], list4[100][100], c = 0, list5[100][100], temp;
    fib[0] = 0;
    fib[1] = 1;
    cout << "1. Введите n\n";
    cin >> n;
    int* list = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }
    list[n - 1] = - 1;
    list[n - 2] = - 1;
    list[n - 3] = - 1;
    for (int i = 0; i < n; i++)
    {
        cout << list[i] << ' ';
    }
    cout << "\n\n2. Введите n\n";
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << fib[i] << ' ';
    }
    cout << "\n\n3. Введите n\n";
    cin >> n;
    int* list3 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> list3[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (list3[i] == 0) cout << i + 1 << ' ';
    }
    cout << "\n\n4. Введите n и m\n";
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> list4[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (list4[i][j] < 0) c++;
        }
    }
    cout << c;
    cout << "\n\n5. Введите n\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> list5[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        temp = list5[i][i];
        list5[i][i] = list5[i][n - 1 - i];
        list5[i][n - 1 - i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << list5[i][j] << ' ';
        }
        cout << endl;
    }
}
