#include <iostream>
using namespace std;

void multiplator (int num_multable)
{
        int x = 0;
        int n = 10; 
        
        while(x<=n)
        {
                cout << num_multable << " * " << x << " = " << x * num_multable << endl;
                x++;
        }
   
}

int main()
{
        int num_multable;
        cout << "Enter a number for multiplication : ";
        cin >> num_multable;
        multiplator (num_multable);
return 0;
}

