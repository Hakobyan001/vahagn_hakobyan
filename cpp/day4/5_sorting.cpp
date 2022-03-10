#include <iostream>
#include <time.h>
using namespace std;

int main() {
srand (time(0));
        int arr[6];
	int arr1[6];
        cout << "The Random Array is    \n ";
	for (int i = 0; i < 6; i++) {
        arr[i] = rand() % 50;
	cout << arr[i] << "\n ";
        }
     	cout << "\n \n The Reverse Array is    \n";
	for (int i = 5; i >= 0; i--) {
	cout << arr[i] << endl;		
	}
	return 0;
}
