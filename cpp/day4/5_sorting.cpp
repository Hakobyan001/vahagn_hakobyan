#include <iostream>
#include <cstring>
#include <time.h>
using namespace std;

int main() {
srand (time(0));
        int x;
	cout << "Print the size of Array" << endl;
	cin >> x;
	int arr[x];
        cout << " The Random Array is    \n";
	for (int i = 0; i < x; i++) {
        	arr[i] = rand() % 50;
		cout << arr[i] << "  ";
        }
     	cout << "\n \n The Reverse Array is    \n";
		for (int i = x - 1; i >= 0; i--) {
		cout << arr[i] << "  ";		
	}
	return 0;
}
