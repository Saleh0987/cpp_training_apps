#include <iostream>
using namespace std;

int main()
{
 int num_one, num_two, op;

 cout << "Type Number One\n";
 cin >> num_one;
 cout << "Type Number Two\n";
 cin >> num_two;
 cout << "Choose Operation Number\n";
 cout << "[1] +\n";
 cout << "[2] -\n";
 cout << "[3] /\n";
 cout << "[4] *\n";
 cin >> op;

 if (op == 1)
 {
  cout << "The result is: " << num_one + num_two;
 }
 else if (op == 2)
 {
  cout << "The result is: " << num_one - num_two;
 }
 else if (op == 3)
 {
  cout << "The result is: " << num_one / num_two;
 }
 else if (op == 4)
 {
  cout << "The result is: " << num_one * num_two;
 }
 else
 {
  cout << "Operation Is Not Valid";
 }

 return 0;
}