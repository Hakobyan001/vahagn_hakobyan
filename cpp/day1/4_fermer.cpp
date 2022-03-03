#include <iostream>
using namespace std;
int main(){
int chickens = 2;
int cows = 4;
int pigs = 4;
int a , b ,c;
int result;
cout << "Print the number of chickens \n";
        cin >> a;
cout << "Print the number of cows \n";
        cin >> b;
cout << "Print the number of pigs \n";
        cin >> c;
chickens = chickens * a;
cows = cows * b;
pigs = pigs * c;
result = chickens + cows + pigs;
cout << "Chickens : " << chickens << endl << "Cows : " << cows << endl << "Pigs : " << pigs <<endl << "Result  : " << result << endl;
return 0;}

