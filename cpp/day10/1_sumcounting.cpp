#include <iostream>
#include <cmath>
using namespace std;

void counting(int, double, int);
int main (int argc, char** argv) {
	int sum = atoi(argv[1]);
        double perc = atof(argv[2]);
        int month = atoi(argv[3]);
	counting(sum, perc, month);
        return 0;
}
void counting(int amount, double percent, int month) {
	time_t now = time(0);
	int difference = 0;
        int startsum = amount;
	for (int j = 0; j < month; j++) {	
		difference = amount * (percent / 100 / 12) ;
                amount += amount * percent / 100 / 12;
		now += 2635200;
		char* dt = ctime(&now);
		cout << "      " << "     "  <<  amount  << "       " << difference << "    " << dt;
		}
	startsum = amount - startsum;
	cout << "The Result is   " << amount << "     . And the income  is    "  << startsum << endl;
}

