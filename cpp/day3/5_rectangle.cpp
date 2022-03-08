#include <iostream>
using namespace std;

int perimeter (int erk,int layn) {
        return (2 * (erk + layn));
}
int area (int erk, int layn) {
        return (layn * erk);
}
int main()
{
	int erk;
	int layn;
	cout << "Print the length of a rectangle : \n";
	cin >> erk;
	cout << "Print the width of a rectangle : \n";
	cin >> layn;	
	cout << "Perimeter = " << perimeter(erk, layn) << endl;
	cout << "Area = " << area (erk, layn) << endl;
	return 0;
}
