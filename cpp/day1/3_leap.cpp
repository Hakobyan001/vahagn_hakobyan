#include <iostream>
using namespace std;

int main()
{
int year = 2022;
int n = 1;
while (n < 20) {
if (year % 4==0){
cout << year << endl;
}year = year + 1;
n++;
}return 0;
}

