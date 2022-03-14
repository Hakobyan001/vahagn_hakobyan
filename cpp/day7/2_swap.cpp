#include <iostream>
using namespace std;

void swap( int a, int b);
int main() {
	int num1, num2;
	cout << "Print the first number \n";
	cin >> num1;
	cout << "Print the second number \n";
	cin >> num2;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	swap(ptr1, ptr2);
	cout << endl << *ptr1 << "   a" << endl << *ptr2 << "   b \n";
	return 0;
}
void swap( int *num1, int *num2) {
	 int temp = *num1;
	 *num1 = *num2;
         *num2 = temp; 
} 

