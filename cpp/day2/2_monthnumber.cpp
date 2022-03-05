#include <iostream>
using namespace std;
	
int main() {
int month;
cout << "Print your month number \n"; 
cin >> month;
switch (month) {
  case 1:
    cout << "January : 31 \n";
    break;
  case 2:
    cout << "February : 28 \n";
    break;
  case 3:
    cout << "March : 31 \n";
    break;
  case 4:
    cout << "April : 30 \n";
    break;
  case 5:
    cout << "May : 31 \n";
    break;
  case 6: 
    cout << "June : 30 \n";
    break;
  case 7:
    cout << "July : 31 \n";
    break;
  case 8:
    cout << "August : 31 \n";
    break; 
  case 9:
    cout << "September : 30 \n";
    break; 
  case 10:
    cout << "October : 31 \n";
    break;
  case 11:
    cout << "November : 30 \n";
    break;	
  case 12:
    cout << "December : 31 \n";
    break;
	}
return 0;
} 
