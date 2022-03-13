#include <iostream>
using namespace std;
int main() {
   const  int m = 4;
   const  int n = 5;
   int  matrix[m][n];
   int flag = 0;
   for (int i = 0; i < m; i++) {
       for (int j = 0; j < n; j++) {
        	cin >> matrix[m][n];
	}
    }
   bool boolean = true;
   for (int i = 0; i < m; i++) {
       for (int j = 0; j < n; j++) {
           if (matrix[i][j] % 2 == 0) {
               flag++;
           }
       }
       if (flag == n) {
           cout << "The result is  ";
           for (int k = 0; k < n; k++) {
               cout << matrix[i][k] << " ";
           }
           boolean = false;
           break;
       }
       flag = 0;
   }
   if (boolean) {
       cout << "No";
   }
   cout << endl;
 return 0;
}
