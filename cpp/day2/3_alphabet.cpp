#include <iostream>
using namespace std;

int main() {
char ch;
cout << "Print a character of alphabet \n";
cin >> ch;
if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
{   
    switch (ch)
    {
        case 'a': 
            cout << ch << (" is Vowel \n");
            break;
        case 'i': 
            cout << ch << (" is Vowel \n");
            break;
        case 'o': 
            cout << ch << (" is Vowel \n");
            break;
        case 'u': 
            cout << ch << (" is Vowel \n");
            break;
        case 'A': 
            cout << ch << (" is Vowel \n");
            break;
        case 'I': 
            cout << ch << (" is Vowel \n");
            break;
        case 'O': 
            cout << ch << (" is Vowel \n");
            break;
        case 'U': 
            cout << ch << (" is Vowel \n");
            break;
        case 'e': 
            cout << ch << (" is Vowel \n");
            break;
        case 'E': 
            cout << ch << (" is Vowel \n");
            break;
        default: 
            cout << ch << (" is Consonant \n");
	}
    }
    else {
	cout << "Error. Print a character of alphabet \n";		
    }	
    return 0;
    }


