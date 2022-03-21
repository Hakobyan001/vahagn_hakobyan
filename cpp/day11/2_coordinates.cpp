#include <iostream>
using namespace std;

void adding(int, int, int, int); 

int main() {
    	int x1, y1, x2, y2,x3, y3, x4, y4;
    	cout << "Input A(x1, y1) " << endl;
    		cin >> x1 >> y1;
	cout << "Input B(x2, x2) " << endl;
    		cin >> x2 >> y2;
	cout << "Input C(x1, y1) " << endl;
    		cin >> x3 >> y3;
	cout << "Input D(x2, y2) " << endl;
    		cin >> x4 >> y4;
    	int ABx = x2 - x2;
    	int ABy = y2 - y1;
    	int CDx = x4 - x3;
    	int CDy = y4 - y3;
    	adding (ABx,ABy,CDx,CDy);
    return 0;
}
void adding(int AB1, int AB2, int CD1, int CD2) {
	if (AB1 * CD1 + AB2 * CD2 == 0) {
        	cout << "Yes. It's parallel" << endl;    
    	} else {
        	cout << "Try again" << endl;  
    	}

}
