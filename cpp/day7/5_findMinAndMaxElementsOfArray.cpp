#include <iostream>
using namespace std;

void MinAndMax (int *ptr, int size, int *min, int *max );

int main () {
	int arr[6];
	int length = 6;
	for ( int i = 0; i < length; i++) {
		arr[i] = rand() % 9 + 1;
		cout << arr[i] << "  ";
		}
	cout << endl;
	int min = arr[0];
	int max = arr[0];
	MinAndMax( arr, length, &min, &max );
	cout << "The min element is  " << min << endl << "The max element is   " <<  max << endl;
	return 0;
	}
void MinAndMax ( int *ptr, int size, int *min, int *max ) {
	for ( int i = 0; i < size; i++ ) {
		if( ptr[i] > *max ) {
			*max = ptr[i];	
		}
		if( ptr[i] < *min ) {
			*min = ptr[i];
		}
	}
}
