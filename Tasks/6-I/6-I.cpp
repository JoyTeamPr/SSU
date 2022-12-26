#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    double a, b;
    int n;
    cout << "Введите a, b и длину массива\n";
    cin >> a >> b >> n;
    double list[1000];
    cout << "Введите последовательность\n";
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (b < list[i] || list[i] < a) cout << i + 1 << ' ';
    }
}

//int main()
//{
//    SetConsoleOutputCP(1251);
//    double a, b;
//    int n;
//    cout << "Введите a, b и длину массива\n";
//    cin >> a >> b >> n;
//    int* list = new int[n];
//    cout << "Введите последовательность\n";
//    for (int i = 0; i < n; i++)
//    {
//        cin >> list[i];
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (b < list[i] || list[i] < a) cout << i + 1 << ' ';
//    }
//    delete[] list;
//}
//
//int main()
//{
//    SetConsoleOutputCP(1251);
//    double a, b;
//    int n, list[1000][2];
//    cout << "Введите a, b и длину массива\n";
//    cin >> a >> b >> n;
//    cout << "Введите последовательность\n";
//    for (int i = 0; i < n; i++)
//    {
//        cin >> list[i][0];
//        list[i][1] = i + 1;
//    }
//    for (int j = 0; j < n; j++)
//    {
//        if (list[j][0] < a || list[j][0] > b) cout << list[j][1] << ' ';
//    }
//}
//
//int main()
//{
//    SetConsoleOutputCP(1251);
//    double a, b;
//    int n;
//    cout << "Введите a, b и длину массива\n";
//    cin >> a >> b >> n;
//    int** list = new int* [100];
//    for (int count = 0; count < n; count++)
//        list[count] = new int[100];
//    cout << "Введите последовательность\n";
//    for (int i = 0; i < n; i++)
//    {
//        cin >> list[i][0];
//        list[i][1] = i + 1;
//    }
//    for (int j = 0; j < n; j++)
//    {
//        if (list[j][0] < a || list[j][0] > b) cout << list[j][1] << ' ';
//    }
//}
