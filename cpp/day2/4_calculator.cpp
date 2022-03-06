#include <iostream>
using namespace std;

int main() {
float num1;
char function;
float num2;
cout << "Hello it's a Primitve Calculator.\n \n";
cout << "Print your first number. \n";
cin >> num1;
cout << "Okay,now print the function/operator that will be done.( +, -, *, /\n";
cin >> function;
cout << "Good, and the finally print the second number. \n";
cin >> num2;
cout << "\n And the Result is \n";
if ((num2 == 0) && (function == '/'))
{
cout << "Error. Try again. It not a Mathematic function. \n";
}
else {
    switch (function) {
	case '+': 
 	  cout << num1 + num2 << endl;
	  break;
	case '-':
	  cout << num1 - num2 << endl;
	  break;
	case '*':
	  cout << num1 * num2 << endl;
	  break;
	case '/':
	  cout << num1 / num2 << endl;
	  break;
	default :
	  cout << "Hmmm...It's Not an Operator/Number. Error. Try again. \n";	  
	  break;
	}
 }
return 0;
}
