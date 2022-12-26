#include <iostream>
using namespace std;

int main()
{
    char s[101];
    int st_en = 0, с = 0;
    cin.getline(s, 101);
    int i = 0;
    while (s[i] != '\0') 
    {
        if (s[i] != ' ' && st_en == 0)
        {
            st_en = 1;
            с++;
        }
        else if (s[i] != ' ' && st_en == 1)
        {

        }
        else if (s[i] == ' ') st_en = 0;
        i++;
    }
    cout << с;
}