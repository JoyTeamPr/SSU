#include <iostream>
#include <Windows.h>
using namespace std;

void function(int &num)
{
    if (num % 5 == 0) num = num / 5;
    else num = num + 1;
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
        cout << num << endl << endl;
    }
}
