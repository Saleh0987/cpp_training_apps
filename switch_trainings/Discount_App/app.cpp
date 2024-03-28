#include <iostream>
using namespace std;

int main()
{
 int price = 100;
 int discount = 10;
 int years;
 cout << "Type The Number Of Years in Company: ";
 cin >> years;

 switch (years)
 {
 case 1:
  discount = 20;
  break;
 case 2:
  discount = 40;
  break;
 case 3:
  discount = 80;
  break;
 }

 cout << "The Price Is " << price - discount << "\n";

 return 0;
}
