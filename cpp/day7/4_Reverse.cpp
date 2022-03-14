#include <iostream>
using namespace std;

void reverse(int *ptr ,int size);
int main () {
	int arr[6];
	int length = 6;
	cout << "The Random Array is   ";   
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % 9 + 1;
		cout << arr[i] << "  ";	
		}
	cout << endl;
	reverse( arr, length );	
	return 0;
}
void reverse(int *ptr,int size ) {
	cout << "The Reverse mode is   ";
	for (int *interp = ptr + size - 1; interp > ptr -1; interp--) {
		cout << *interp << "  ";		
	}
}
