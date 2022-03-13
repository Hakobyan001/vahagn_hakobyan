#include <iostream>
using namespace std;

int main() {
	const int m = 3;
	const int n = 5;
	int matrix[m][n];
	int sum[9] = {0};
  	int min, max;	
        for (int i = 0; i < m; i++)
        {
		for (int j = 0; j < n; j++)
                 {
			matrix[i][j] = rand() % 100;
                        	if( matrix[i][j] > 0)
                        	{
                            		cout  << matrix[i][j] << "  ";
				}
				}
		cout << endl; 
	}      	
	int item = 0;
    	for (int i = 0; i < m; i++) {
        min = i;
        max = i;
        for (int j = 0; j < n; j++) {
            if (matrix[i][min] > matrix[i][j]) {
                min = j;    
            }
            if (matrix[i][max] < matrix[i][j]) {
                max = j;    
            }
        }    
        item = matrix[i][min];
        matrix[i][min] = matrix[i][max];
        matrix[i][max] = item;
    }
    cout << endl << endl << "Result :" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "  ";
        }    
        cout << endl;
    }  
    return 0;    
}			
	

