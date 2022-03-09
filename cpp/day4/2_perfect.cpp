#include <iostream>
using namespace std;

void perfect (int ch){
	int arr[] = { 6,28,496,8128,33550336 };
	int i;
	for (i = 0; i <=5; i++){
	if (ch == arr[i] ){
		cout << ch << "  is a perfect number \n";
		break;
		}
	}
	if (ch != arr[i]){
		cout << ch << "  it isn't a perfect number \n";
	}
}
int main(){
	cout << "Input a perfect number \n";
	int n;
	cin >> n;
	perfect (n);
	return 0;	
}
