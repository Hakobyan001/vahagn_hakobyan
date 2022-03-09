#include <iostream>
using namespace std;

void alphabet_char(char letter)
{
        if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
        {
                switch (letter)
                {
                        case 'A':
                        case 'a':
                        case 'o':
                        case 'O':
                        case 'U':
                        case 'u':
                        case 'e':
                        case 'E':
                        case 'i':
                        case 'I':
                                cout << letter << "   is vowel \n";
                                break;
                        default:
                                cout << letter << "   is consonant \n";
                }
        }
        else
        {
                cout << "Error. Try again.\n";
        }
}
int main()
{
	char letter;
	cout << "Enter a character from alphabet \n ";
	cin >> letter;
	alphabet_char(letter);
	return 0;
}
