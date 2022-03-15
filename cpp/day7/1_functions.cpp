#include <iostream>
using namespace std;

void sum1( int *a, int *b, int *sum );
void sum2(int &a, int &b, int &sum);
void sum3(int a, int b, int &sum);
void sum4(int a, int *b, int &sum);
void sum5(int *a, int *b, int &sum);

int main() {
	int num1 = 5;
	int num2 = 7;

	//THE FIRST
	int res = 0;
	sum1( &num1, &num2, &res);
	cout << "The result of First  is  " << res << endl;
	
	//THE SECOND
	int sum10 = 0;
	int &num3 = num1;
	int &num4 = num2;
	int &res2 = sum10; 
	sum2(num3, num4, res2);
	cout << "The result of Second is  " << res2 << endl;

	//THE THIRD
	int &res3 = sum10;
	sum3 (num1, num2, res3);
	cout << "The result of Third  is  " << res3 << endl;

	//THE FOURTH
	int *ref = &num2;
	int res4 = sum10;
	sum4(num1, ref, res4);
	cout << "The result of Fourth is  " << res4 << endl;

        //THE FIFTH
	int res5 = sum10;
	sum5(&num1, &num2, res5);
	cout << "The result of Fifth  is  " << res5 << endl;
}
void sum1( int *a, int *b, int *sum ){
	*sum = *a + *b;
}
void sum2(int &a, int &b, int &sum){
	sum = a + b;
}
void sum3(int a, int b, int &sum){
	sum = a + b;
}
void sum4(int a, int *b, int &sum){
	sum = a + *b;
}
void sum5(int *a, int *b, int &sum){
	sum = *a + *b;
}



