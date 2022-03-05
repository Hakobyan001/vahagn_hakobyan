#include <iostream>
using namespace std;
int main() {
           int size;
           cout << "Input:";
           cin >> size;
           int i = 1;
           while ( i <= size) {
                   int j = 1;
                 while (j <= size - i) {
                        cout << " ";
                        j++;
                  }
                  j = 1;
                 while (j <= i) {
                        cout << "*";
                         j ++;
                }
                i ++;
                cout << endl;
          }
          cout << endl;
          i = 1;
          while (i <= size) {
                int j = size;
                while (j >= i) {
                         cout << "*";
                         j --;
                }
                i ++;
                cout << endl;
          }
          cout << endl;
          i = 1;
          while (i <= size) {
                int j = 1;
                while (j <= i) {
                         cout << "*";
                         j ++;
                }
                i ++;
                cout << endl;
          }
          i = 1;
          cout << endl;
          while (i <= size) {
                 int j = 1;
                 while (j <= size - i) {
                        cout << " ";
                        j ++;
                 }
                 j = 1;
                 while (j <= 2 * i - 1) {
                        cout << "*";
                        j ++;
                }
                i ++;
               cout << endl;
         }
         cout << endl;
         return 0;
 }
