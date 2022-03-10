#include <iostream>
using namespace std;
	
void perfect(int num) {
	int i;
	int sum = 0;
	for (i=1; i < num; i++) {
		if (num % i == 0) {
			sum += i;
		}
	}
	if (num == sum) {
		cout << "Yes it's a perfect" << endl;
	}
	else
	{ 
	 	cout << "Nope. Try again." << endl;
	}
}
int main (){
	int n;
	cout << "Print the number " << endl;
	cin >> n;
	perfect(n);
	return 0;
}
