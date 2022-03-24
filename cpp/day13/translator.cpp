#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{	
	ifstream en_hy("en_hy.txt");
        string word;
        cout << "Input a word: ";
        getline(cin,word);
	if(en_hy.is_open())
               {
		string str;
                while(getline(en_hy, str))
                {
                        string file_word;
                        bool arrowFound = false;
                        string translation = "";
                        for(int i = 0; str[i] != '\0'; i++)
                        {
                                if(str[i] == '-' && str[i+1] == '>') {
                                        arrowFound = true;
                                }
                                if (!arrowFound) {
                                        file_word += str[i];
                                } else {
                                        translation += str[i + 2]  ;
                                }
                                }
                        if(file_word == word)
                                cout << translation << endl;

                        }
                
en_hy.close();
	}
        ifstream hy_en("hy_en.txt");
        if(hy_en.is_open())
        {	
                string str;
                while(getline(hy_en, str))
                {
                        string file_word;
                        bool arrowFound = false;
                        string translation = "";
                        for(int i = 0; str[i] != '\0'; i++)
                        {
                                if(str[i] == '-' && str[i+1] == '>') {
                                        arrowFound = true;
                                }
                                if (!arrowFound) {
                                        file_word += str[i];
                                } else {
                                        translation += str[i + 2]  ;
                                }
                                }
                        if(file_word == word)
                                cout << translation << endl;
				}
                        }
                
hy_en.close();

return 0;
}

