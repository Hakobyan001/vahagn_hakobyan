#include <iostream>
using namespace std;

 int main() {
 const int size = 4 ;
 char matrix[size][size];
 char letter = 'a';
         for ( int i = 0; i < size; i++) {
                 for (int j = 0; j < size ; j++) {
                         matrix[i][j] = rand() % 26 + 65 + rand() % 2 * 32;
                         cout << matrix[i][j] << " " ;
                         }
                 cout << endl;
                 }
         cin >> letter;
         for ( int i = 0; i < size; i++) {
                   for (int j = 0; j < size ; j++) {
                           if (letter == matrix[i][j]) {
                                 cout << '['  << i << ']' << '[' <<  j << ']' << endl << endl;
                           }
                       }
                   }
       return 0;
}
