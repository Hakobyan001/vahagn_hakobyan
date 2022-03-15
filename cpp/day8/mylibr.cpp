#include <iostream>
#include "myatoi.h"
using namespace std;

int main(int argc, char** argv) {
        int sum1 = 0;
        for (int i = 1; i < argc; i++) {
                sum1 += myatoi(argv[i]);
        }
        cout << "The sum of numbers : " << sum1 << endl;
        return 0;
}
