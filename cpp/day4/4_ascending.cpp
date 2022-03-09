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
        int i,j,temp;
	int size = 6;
	for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Elements of array in sorted ascending order:" << endl;
    for(i=0; i<size; i++)
    {
        cout << arr[i] << endl;
    }
	return 0;       
}	
         
