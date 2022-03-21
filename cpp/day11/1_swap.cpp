#include <iostream>
using namespace std;

int main() {
        int size;
                cout << "Print the size of your array \n";
                cin >> size;
        int arr[size];
                cout << endl << "Print your  array  \n";
                for (int i = 0; i < size; i++){
                        cin >> arr[i];
                }
        cout << endl;
                for (int i = 0; i < size; i++){
                        cout << arr[i] << " ";
                        }
                cout << endl;
                cout << endl << "Print the swapping indexes \n";
        int num1, num2;
        cin >> num1 >> num2;
        cout << endl;
        int temp = 0;
        temp = arr[num1];
        arr[num1] = arr[num2];
        arr[num2] = temp;
        cout << "Output with swapping : \n ";
                for (int i = 0; i < size; i++){
                        cout << arr[i] << " ";
                }
  return 0;
}

