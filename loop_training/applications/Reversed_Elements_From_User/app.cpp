#include <iostream>
using namespace std;

int main()
{
 int vals[5];
 int inp;
 cout << "Type 5 Numbers To Reverse\n";

 // [0, 1, 2, 3, 4]

 for (int i = 4; i > -1; i--)
 {
  cin >> inp;
  vals[i] = inp;
 }

 cout << "======================\n";

 for (int i = 0; i < 5; i++)
 {
  cout << vals[i] << "\n";
 }
 return 0;
}