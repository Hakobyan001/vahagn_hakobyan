#include <iostream>
using namespace std;

void num2_find(int num1){
  int num2;
  do {
    if (num1 < 0 || num1 > 100){
      cout << "Error. Try again. \n";
      cin >> num1;
    }
    else
    {
      cout << "Find the num2 : \n";
      cin >> num2;
      if (num2 < num1)
      {
        cout << "Bigger than num2 \n";
      }
      else if (num2 > num1)
      {
        cout << "Smaller than num2 \n";
      }
      else
      {
        cout << "Excellent  \n";
      }
    }
  } while (num2 != num1);
}

int main()
{
        int num1;
        cout << "Enter a num2 for finding from 1 until 100 \n";
        cin >> num1;
        num2_find(num1);
return 0;
}

