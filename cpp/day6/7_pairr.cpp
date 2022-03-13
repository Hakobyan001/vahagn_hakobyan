#include <iostream>
using namespace std;
int main() {
   const  int m = 4; 
   const  int n = 2;
   int  matrix[m][n];
   int flag = 0;
   int x = 0;
   int y = 0;
   for (int i = 0; i < m; i++) {
       for (int j = 0; j < n; j++) {
		matrix[i][j] = rand() % 30;
		cout << matrix[i][j] << " ";
		if ( matrix[i][j] % 2 == 0) {
			flag = 1;
			x = i;
			y = j;
		 	}	
		else if( matrix[i][j] % 2 != 0) {
			flag = 0;
		} 
	}
	cout << endl;
}
	if( flag = 0 ){
		cout << "No" << endl;
		return 0;
	}
	cout << endl << " The Result is   " << matrix[x][y] << "'s pair"  << endl;
	 return 0;
}
