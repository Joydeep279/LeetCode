#include <iostream>
using namespace std;

int BinarySearch(int arr[], int len, int key) // ==> Return INDEX
{
    int start = 0;
    int end = len - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {

            end = mid;
        }
        else
        {
            start = mid;
        }
    }

    return -1;
}

int main()
{ //              0  1   2   3   4   5   6   7   8   9
    int arr[] = {1, 3, 5, 6, 7, 9, 10, 13, 16, 17, 19};
    int len = sizeof(arr) / sizeof(arr[0]);
    int key = 16;
    cout << BinarySearch(arr, len, key);
    return 0;
}