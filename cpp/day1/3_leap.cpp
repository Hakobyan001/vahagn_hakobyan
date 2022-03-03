#include <iostream>
using namespace std;

int main()
{
int year;
cout << "Print the starting year \n";
cin >> year;
int n = 0;
while (n < 20) {
cout << year << endl;
year = year+4;
n++;
}return 0;
}

