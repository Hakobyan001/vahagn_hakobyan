#include <iostream>
#include <stdlib.h>
using namespace std;
int count(int* , int , int );
int main() {
        int size;    
        cout << "Print the length of an  array :  ";    
        cin >> size;
        int *arr = new int[size];
	cout << "Print the numbers of an array :  " << endl;
        for(int i = 0; i < size; i ++) {
                cin >> arr[i];
        }
        cout << "The array is:  \n";
        for(int i = 0; i < size; i++) {
                cout << arr[i] << "  ";
        }
        cout << endl;
        int num , temp; 
        int min = 0;
        for(int i = 0; i < size; i++) {
        		num = count(arr, i, size);
        		if(num > min) {
           			 min = num;
            			 temp = i;
                 	}
        }
        cout << "The Result : ";
        for(int i = temp; i <= temp + min; i++) {
        	cout << arr[i] << "  ";
        	}
        cout << endl;
        return 0;
}
int count(int* arr, int start, int length)
{
    int count = 0;
    for(int i = start; i <= length - 1; i++) 
    {   
        if(arr[i] <= arr[i + 1]) {
            count ++; 
	} else {
		break;
		}
	}
	return count;
}
