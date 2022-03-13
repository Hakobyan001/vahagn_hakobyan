#include <iostream>
#include <stdlib.h>
#include <time.h>
 using namespace std;
 int main()
 {
         srand(time(0));
         const int size = 4;
         int matric[size][size];
         int sum[8] = {0};
         for (int i = 0; i < size; i++)
         {
                 for (int j = 0; j < size; j++)
                 {	
			matric[i][j] = rand() % 10 + 1;
			if(matric[i][j] > 0)
			{
			    cout << matric[i][j] << " ";
			}else
			{
			    cout << matric[i][j] << "  ";
			}
		}
		cout << endl;
	}
        cout << endl;	
         for (int i = 0; i < size; i++)
         {
                 for (int j = 0; j < size; j++)
                 {
			if (j < size - i - 1) {
               		 sum[0] += matric[i][j];
	        	}
			if (j > i) {
                	sum[1] += matric[i][j];
            		}
            		if (j < i) {
                	sum[2] += matric[i][j];
            		}
            		if (size < i + j + 1) {
                	sum[3] += matric[i][j];
            		}
            		if (j < size - i - 1 && j > i) {
                	sum[4] += matric[i][j];
            		}
            		if (j < size - i - 1 && j < i) {
                	sum[5] += matric[i][j];
            		}	
            		if (size < i + j + 1 && j > i) {
                	sum[6] += matric[i][j];
            		}
            		if (size < i + j + 1 && j < i) {
                	sum[7] += matric[i][j];
            		}
                 }
                cout << endl;
          }
 
         cout << endl << sum[0] << " " << sum[1] << " " << sum[2] << " " << sum[3] << " " << sum [4] << "  " << sum[5] << "  " << sum[6] << "  " << sum[7];
         return 0;
 }

