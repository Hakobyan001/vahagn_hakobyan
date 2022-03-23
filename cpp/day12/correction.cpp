#include <iostream>
#include <fstream>
#include <string>

using namespace std;
string correct(string word); 
int main() {	
	string word;
 	ifstream check;
 	check.open("dictionary.txt");
	ofstream cor;
	cor.open("corrected.txt");
 	cout << "Text :   ";
  	getline(cin,word);
  	string str[8];
	int elem = 0;
	int n = 0;
		for (int i = 0; word[i] != '\0'; i++) {
      			if (word[i] == ' ') {
            			n++;
            			continue;
      			}
      		str[n] += word[i];

}

	return 0;
}
string correct(string word) { 
	ifstream foo;
	foo.open("dictionary.txt");
	string letter;	
	while(!foo.eof()) {
		int flag = 0;
		getline(foo, letter);
		if(letter.size() != word.size()){
			continue;
		}
			for(int i = 0; word[i] != '\0'; i++) {
				if(word[i] != letter[i]) {
			 		flag++;
					}	
				}
				if(flag == 1) {
					break;
					}
				else {
					return letter;
					}	
		}
	foo.close();
	return word;
	
}


