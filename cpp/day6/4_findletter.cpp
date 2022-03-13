#include <iostream>
using namespace std;
int main() {
	cout << "Print the sentence \n";
   	string letter;
	int flag = 0; 
	int result = 0;
   	getline ( cin, letter);
	for (int i = 0; i < letter.length(); i++){
		if ( letter[i] == 'B' ) {
			flag++;
			}
		if (( flag == 2  && letter[i] == ' ' ) || ( flag == 2 && letter[i + 1] == '\0' )) {
			result ++; 
			}
	  	if (letter[i] == ' ' ) {	
			flag = 0;
			}
	}
	cout << "The number of words that have two letters 'B' is    " << result << endl; 
	return 0;
}
