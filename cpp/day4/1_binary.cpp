#include <iostream>
using namespace std;

void binary(int);
int main() {
	int num;
	cout << "Enter a positive number \n";
	cin >> num;
	if (num > 0) {
		binary (num);
	}
	else if (num == 0) {
		return 1;
	}
	else {
	cout << "Error. Try again. Print the positive number \n";
	}
	return 0;
}
void binary( int n) {
	int i=0;
	int arr[10];
	while (n > 0){
	arr[i] = n % 2;
	n = n / 2;
	i++;
	}
	cout << "Into Binary \n";
	for (int j = 0;j < i; j++) {
	cout << arr[j] << endl; 
	}
}
