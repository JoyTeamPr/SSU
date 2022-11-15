#include <iostream>
#include <Windows.h>
using namespace std;

int res;

int function(int num)
{
    if (num % 5 == 0) ::res = num / 5;
    else ::res = num + 1;
    return 0;
}

int main()
{
    int num;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Вводите числа по одному\n";
    while (true)
    {
        cin >> num;
        function(num);
        cout << res << endl << endl;
    }
}
