int BinarySearch(int arr[], int len, int key)
{
    int result;
    int start = 0;
    int end = len - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (mid * mid == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            result = start;
            start = mid + 1;
        }
    }

    return result;
}
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int key = 9;
    cout << BinarySearch(arr, len, key);
    
    return 0;
}