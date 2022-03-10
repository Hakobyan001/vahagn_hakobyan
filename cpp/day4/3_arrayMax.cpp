#include <iostream>
#include <time.h>
using namespace std;

int main() {
srand (time(0));
	int x;
	cout << "Print the size \n";
	cin >> x;
	int arr[x];
	for (int i = 0; i < x; i++) {
	arr[i] = rand() % 100;
	cout << arr[i] << "  \n ";
	}
	cout << endl;
	int max = arr[0];
	for (int j = 1; j < x; j++) {
		if (arr[j] > max) {
			max = arr[j];
		} 
	}
	cout << "Maximum number is a \n " << max << endl;
return 0;
}
