#include <iostream>
using namespace std;

void leapyear (int year) 
{
	int n = 0;
	while( n<20 )
        {
        	if (year % 4 == 0) {
		cout << year << endl;
                year += 4;
                n++;
		} 
        }
}
int main()
{
        int year = 2024;       
        cout << "Next twenty leaps years from 2024 \n";
	leapyear (year);
        return 0;
}
