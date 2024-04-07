
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
 string nameone = "ElZEro"; // eLzeRO
 int nameoneSize = size(nameone);

 for (int i = 0; i < nameoneSize; i++)
 {
  if (isupper(nameone[i]))
  {
   cout << char(tolower(nameone[i]));
  }
  else
  {
   cout << char(toupper(nameone[i]));
  }
 }

 return 0;
}