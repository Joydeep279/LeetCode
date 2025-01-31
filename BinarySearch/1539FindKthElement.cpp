#include <iostream>
using namespace std;

bool BinarySearch(int *arr, int key)
{
    int end = 4;
    int start = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
            return 1;
        else if (key > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return 0;
}
int findKthPositive(int *arr, int k)
{
    int result;
    int count = 0;
    for (int i = 1; true; i++)
    {
        if (count == k + 1)
        {
            return result;
        }
        else if (!(BinarySearch(arr, i)))
        {
            result = i;
            ++count;
        }
    }
}

int main()
{
    int arr[5] = {2, 3, 4, 7, 11};
    cout << findKthPositive(arr, 4);
    // cout << BinarySearch(arr, 11);
    return 0;
}