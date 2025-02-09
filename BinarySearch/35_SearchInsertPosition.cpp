#include <iostream>
using namespace std;

int BinarySearch(int arr[], int len, int key) // ==> Return INDEX
{
    int start = 0;
    int end = len - 1;
    int result;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key) // ==> left Shift
        {
            end = mid - 1;
        }
        else
        {
            result = mid + 1; // ==> right Shift
            start = mid + 1;
        }
    }

    return result;
}

int main()
{ //              0  1   2   3   4   5   6   7   8
    int arr[] = {9, 16, 21, 24, 25, 78, 80, 90, 93};
    int len = sizeof(arr) / sizeof(arr[0]);
    int key = 98;
    cout << BinarySearch(arr, len, key);
    return 0;
}