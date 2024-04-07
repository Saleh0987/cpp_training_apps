#include <iostream>
#include <cctype>
using namespace std;

int main()
{
 string nametwo = "E\nl  z  \n\te r\t\no";
 int nametwoSize = size(nametwo);

 for (int i = 0; i < nametwoSize; i++)
 {
  // if (nametwo[i] == ' ')
  // {
  //   continue;
  // }
  
  if (isspace(nametwo[i]))
  {
   continue;
  }
  cout << nametwo[i];
 }

 return 0;
}