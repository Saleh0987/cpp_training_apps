#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
 int numsTwo[] = {10, 20, 10, 10, 13, 15, 100, 20, 10};
 int numsTwoSize = size(numsTwo);
 int counter = 0;
 int choosenNum = 20;

 for (int i = 0; i < numsTwoSize; i++)
 {
  if (numsTwo[i] == choosenNum)
  {
   counter++;
  }
 }

 cout << choosenNum << " Found " << counter << " Times";

 return 0;
}