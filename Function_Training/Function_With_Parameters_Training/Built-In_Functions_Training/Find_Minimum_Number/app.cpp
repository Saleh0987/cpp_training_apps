#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
 cout << min(10, -20) << "\n";                       // -20
 cout << min(10, 20) << "\n";                        // 10
 cout << min('a', 'c') << "\n";                      // a
 cout << min('a', 'C') << "\n";                      // C
 cout << int('a') << "\n";                           // 97
 cout << int('C') << "\n";                           // 67
 cout << min({10, -20, 30, -100, 100, -50}) << "\n"; // -100
 cout << "=======================\n";
 cout << max(10, -20) << "\n";                       // 10
 cout << max(10, 20) << "\n";                        // 20
 cout << max('a', 'c') << "\n";                      // c
 cout << max('a', 'C') << "\n";                      // a
 cout << int('a') << "\n";                           // 97
 cout << int('C') << "\n";                           // 67
 cout << max({10, -20, 30, -100, 100, -50}) << "\n"; // 100
 cout << "=======================\n";

 int nums[] = {10, -20, 30, -100, 100, -50};
 int numsSize = size(nums);
 int checkMinNum = 0;

 for (int i = 0; i < numsSize; i++)
 {
  if (nums[i] < checkMinNum)
  {
   checkMinNum = nums[i];
  }
 }

 cout << checkMinNum << "\n";

 return 0;
}