#include <iostream>
using namespace std; 

int main(){
    int n, sum=1, i=1;
    cout << "Print the number: \n";
    cin >> n;
    while (i <= n) {
        sum =sum * i;
        i++;
    }
    cout << "The Factorial of "<< n <<" is  \n" << sum << endl;
return 0;
}

