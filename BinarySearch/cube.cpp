#include <iostream>
using namespace std;

int getCube(int n)
{
    int start = 1;
    int end = n;
    int lowerBound = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Correct midpoint calculation
        int target = mid * mid * mid;

        if (target == n)
        {
            return mid; // Exact cube root found
        }
        else if (target > n)
        {
            end = mid - 1; // Update end if target is too high
        }
        else
        {
            lowerBound = mid; // Update lowerBound if target is too low
            start = mid + 1;  // Update start if target is too low
        }
    }

    return lowerBound; // Return the closest integer less than the cube root
}

int main()
{
    cout << getCube(18486); // Output the result
    int arr[10] = {};
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}
