#include <cstring>
using namespace std;

int myatoi(char* arr)
{
	int sum = 0;
	int length = strlen(arr);
	for (int i = 0; i < length ; i++) {
		if (arr[i] > 47 && arr[i] < 58) { 
			sum = sum * 10 + arr[i] - '0';
    		}
		else{
			return 0;
		}
	}	
	return sum;
}
