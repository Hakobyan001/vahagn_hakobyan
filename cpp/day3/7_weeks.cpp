#include <iostream>
using namespace std;

void weekcounter(int day)
{
 switch (day)
  {
    case 1:
      cout << "Mondayi \n";
      break;
    case 2:
      cout << "Tuesday \n";
      break;
    case 3:
      cout << "Wednesday \n";
      break;
    case 4:
      cout << "Thursday \n";
      break;
    case 5:
      cout << "Friday \n";
      break;
    case 6:
      cout << "Saturday \n";
      break;
    case 7:
      cout << "Sunday \n";
      break;
    default:
      cout << "Error. Print the number of the weeks (Until 7).Try again. \n";
  }
}
int main()
{
  int day;
  cout << "Print a number of the week(Until 7). \n";
  cin >> day;
  weekcounter(day);
  return 0;
}
