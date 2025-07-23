#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int i = 0;
    for (int j = 1; j < nums.size(); j++)
        if (nums[i] != nums[j])
            nums[++i] = nums[j]; 
            
    for (int k = 0; k <= i; k++)
    {
        cout << nums[k] << " ";
    }

    return 0;
}