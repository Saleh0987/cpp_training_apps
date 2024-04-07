#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
 
 int nums[] = {10, -20, 30, -100, 100, -50};
 int numsSize = size(nums);
 int checkMinNum = 0;

 for (int i = 0; i < numsSize; i++)
 {
  if (nums[i] > checkMinNum)
  {
   checkMinNum = nums[i];
  }
 }

 cout << checkMinNum << "\n";

 return 0;
}