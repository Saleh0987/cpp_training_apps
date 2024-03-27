#include <iostream>
using namespace std;

int main()
{

 int points;
 cout << "enter your points: ";
 cin >> points;

 if (points > 0 && points <= 500)
 {
  cout << "Not Bad\n";
 }
 else if (points > 500 && points <= 1000)
 {
  cout << "Very Good\n";
 }
 else{
  cout << "VIP\n";
 }

  return 0;
}