#include <iostream>
using namespace std;

void SumArr( int *ptr,int size);
int main(){
	int arr[6];
	int length = 6;
	 for (int i = 0; i < length; i ++) {
        	arr[i] = rand() % 8 + 1;
        	cout << arr[i] << " ";
    	}
	SumArr(arr, length);
	return 0;
}
void SumArr( int *ptr, int size){ 
	int sum = 0;
	for (int i = 0; i < size; i++ ){
	sum += *(ptr + i);
	}
	cout << endl << "The Result is   " << sum << endl << endl;
}
