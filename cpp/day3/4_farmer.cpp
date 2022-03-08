#include <iostream>
using namespace std;

void count_legs()
{
        int chickens = 2;
	int cows = 4;
	int pigs = 4;
	int a, b, c;
	int result;
	cout << "Enter a number of the chickens  : \n";
        cin >> a;
	cout << "Enter a number of the cows  : \n";
	cin >> b;
	cout << "Enter a number of the pigs  : \n";
        cin >> c;
	chickens = 2 * a;
	cows = 4 * b;
	pigs = 4 * c;
	result = chickens + pigs + cows;
	cout << "Chickens : " << chickens << endl << "Cows : " << cows << endl << "Pigs : " << pigs <<endl << "Result  : " << result << endl;
}
int main()
{
	count_legs();
	return 0;
}
