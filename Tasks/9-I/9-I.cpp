#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char temp[100];
	ifstream some_file("input.txt");
	some_file >> temp;
	cout << temp << endl;
	some_file.getline(temp, 100);
	some_file.close();
	cout << temp << endl;

	cin.get();
}