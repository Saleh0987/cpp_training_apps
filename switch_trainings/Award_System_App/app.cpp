#include <iostream>
using namespace std;

int main()
{

 int num;
 cout << "Type The Number: ";
 cin >> num;

 switch (num)
 {
 case 100:
 case 110:
 case 120:
  cout << "Congratz For The iPhone";
  break;
 case 200:
  cout << "Congratz For The iPad";
  break;
 case 300:
  cout << "Congratz For The TV";
  break;
 case 400:
  cout << "Congratz For The KeyChain";
  break;
 default:
  cout << "No Award For This Number";
 }
 
 return 0;
}
