#include <iostream>
using namespace std;

int main()
{
 int a, b, c;
 cout << "enter three number:\n";
 cin >> a >> b >> c;

 if (a > b && a > c){
  cout << a << " Is The Greatest Number\n";
 }
 else if (b > a && b > c)
 {
  cout << b << " Is The Greatest Number\n";
 }
 else 
 {
  cout << c << " Is The Greatest Number\n";
 }

  return 0;
 }