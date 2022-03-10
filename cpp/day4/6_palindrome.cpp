#include <iostream>
#include <cstring>
using namespace std;
	
int main(){
	char arr[7];
    	int i, length;
    	int boolean;
    
    	cout << "Print the numbers of arr: ";
	cin >> arr;
   	 
    	length = strlen(arr);

	for (i = 0; i <= length; i++) {
		if (arr[i] >= 'a' && arr[i] <= 'z') {
			arr[i] = arr[i] + ('a' - 'A'); 
		}
	}
    
    	for( i=0;i < length ;i++ ) {
    		if( arr[i] != arr[ length-i-1 ]) {
        		boolean = 1;
        		break;
   		}
	}
    
    	if ( boolean == 1 ) {
        	cout << "It's not a  palindrome" << endl; 
    	}    
   	else {
        	cout << "It's a palindrome" << endl; 
    	}
    	return 0;
}

