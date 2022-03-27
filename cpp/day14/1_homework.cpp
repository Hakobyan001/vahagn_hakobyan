#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int weekday(int, int, int);
struct diary {
        string note;
        struct data {
                int dd;
                int mm;
                int yyyy;
        }d;
        enum {
                Monday = 1,
                Tuesday,
                Wednesday,
                Thursday,
                Friday,
                Saturday,
                Sunday
        };
};

int main() {
	int dd = 0,mm  = 0,yy = 0;
        bool b = true;
        while(b) {
                cout << "Input dd/yy/yyyy:";
                string data;
                cin >> data;
                int elem = 0;
                string day = "", month = "", year = "";
                for(int i = 0; data[i] != '\0'; i++) {
                        if(data[i] != '/' && elem == 0) {
                                day += data[i];
                                continue;
                        }else if(data[i] == '/'){
                                elem ++;
                                i ++;
                        }
                        if(data[i] != '/' && elem == 1) {
                                month += data[i];
                                continue;
                        }
                        if(elem == 2){
                                year += data[i];
                        }
                }
                ofstream file;
                string text;
                string s = "./note/" +  day + '_' + month + '_' + year + ".txt";
                file.open(s.c_str(), ios::app);
                cout << "Note:";
                cin.ignore();
                getline(cin, text);
                file << text << endl;
                file.close();
                string command;
        	cout << "Command:(add/exit)";
        	cin >> command;
        	if(command == "add") {
            		b = false;
			continue;
        	}
        	else if(command == "exit") {
            		b = false;
			} else {
    	    		cout << "Enter Command: add/exit: ";
        		cin >> command;
    			}
		
			
	}        
return 0;
}
/*int weekday(int dd,int mm,int yy)
{
    int rst = dd + ((153 * (mm + 12 * ((14 - mm) / 12) - 3) + 2) / 5) 
        + (365 * (yy + 4800 - ((14 - mm) / 12)))
	+ ((yy + 4800 - ((14 - mm) / 12)) / 4)
	- ((yy + 4800 - ((14 - mm) / 12)) / 100)
	+ ((yy + 4800 - ((14 - mm) / 12)) / 400)
	- 32045;

	return (rst+1)%7 ;
}
*/
