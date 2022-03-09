#include <iostream>
#include <time.h>
using namespace std;

int main() {
srand (time(0));
	int arr[6];
	for (int i = 0; i < 6; i++) {
	arr[i] = rand() % 50;
	cout << arr[i] << "  \n ";
	}
	cout << endl;
	int max = arr[0];
	for (int j = 0; j < 7; j++) {
		if (arr[j] > max) {
			max = arr[j];
		} 
	}
	cout << "Maximum number is a \n " << max << endl;
return 0;
}
