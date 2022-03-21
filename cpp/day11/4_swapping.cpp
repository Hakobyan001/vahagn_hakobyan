#include <iostream>
using namespace std;

void permute(string text, int l, int r) {
	if (l == r)
		cout << text << endl;
	else {
		for (int i = l; i <= r; i++) {
			swap(text[l], text[i]);
			permute(text, l+1, r);
			swap(text[l], text[i]);
			}
		}
	}
int main() {	
	cout << "Print a word for permuting \n";
	string input;
	cin >> input;
	int length = input.length();
	permute(input, 0, length - 1);
	return 0;
}

