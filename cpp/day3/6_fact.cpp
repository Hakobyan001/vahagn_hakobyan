#include <iostream>
using namespace std;

int fact(int num){
int i = 1;
int result;
while (i < num) {
	i++; 
	cout << result <<  num * i << endl;
	return 0;
	}
}
int main () {
	int n;
	cout << "Enter the number for facting \n";
	cin >> n;
	cout << "The factorial of :   " << fact(n) << endl;
	return 0;
	
}
