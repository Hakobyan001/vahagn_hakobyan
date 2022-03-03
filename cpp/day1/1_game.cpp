#include <iostream>
using namespace std;
int main(){
        int num;
        int n;
        cout << "Print your number \n";
        cin >> num;
        cin >> n;
        do {
                if (num > n) {
                cout << "Little bit more \n" ;
                }else if (num < n){
                cout << "A little less \n" ;               
                }cin >> n;
		}while (num != n);
                cout << "Finally \n" ;
		return 0;}

