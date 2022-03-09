#include <iostream>
using namespace std;

void monthcounter (int month_counter)
{
	switch (month_counter)
        {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                        cout << "31 days \n";
                        break;
                case 4:
                case 6:
                case 9:
                case 11:
                        cout << "30 days \n";
                        break;
                case 2:
                        cout << "29 days \n";
                        break;
                default:
                        cout << "Error.  Print the number until 12. Try again \n";
        }
}
int main()
{
	int month_counter;
	cout << "Enter thw Month number until 12 : ";
	cin >> month_counter;
	monthcounter(month_counter);
	return 0;
}
