#include <iostream>
#include<vector>
using namespace std;
int main()
{

    int arr[] = {12, 20, 12, 2, 4, 22, 2};
    int size = 7;
    int num1 = 2;
    int num2 = 2;
    bool increment = false;
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (!increment && arr[i] == num1)
        {
            increment = true;
            continue;
        }
        else if (increment && arr[i] == num2)
        {
            break;
        }
        if (increment)
        {
            ++count;
        }
    }
    cout << count << "\n";
    return 0;
}
class Solution {
public:
    int getCount(vector<int> &arr, int num1, int num2) {
        int count = 0;
        int size = arr.size();
        
        int left = -1;  // Initialize as -1 to indicate not found
        int right = -1; // Initialize as -1 to indicate not found
        
        // Find the leftmost occurrence of num1
        for (int i = 0; i < size; i++) {
            if (arr[i] == num1) {
                left = i;
                break;
            }
        }
        
        // Find the rightmost occurrence of num2
        for (int i = size - 1; i >= 0; i--) {
            if (arr[i] == num2) {
                right = i;
                break;
            }
        }
        
        // If either num1 or num2 is not found or left > right, return 0
        if (left == -1 || right == -1 || left > right) {
            return 0;
        }
        
        // Count elements between left and right indices (inclusive)
        for (int i = left; i <= right; i++) {
            count++;
        }
        
        return count;
    }
};
