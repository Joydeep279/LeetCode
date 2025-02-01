#include <iostream>
using namespace std;
char BinarySearch(int arr[], int key)
{
    int end = 5;
    int start = 0;
    int left = -1;
    int right = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            left = mid;
            end = mid - 1;
        }

        else if (key > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    end = 5;
    start = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            right = mid;
            start = mid + 1;
        }

        else if (key > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    cout << left << " " << right;
    return '\n';
}
int main()
{
    int arr[6] = {5, 7, 7, 8, 8, 10};

    cout << BinarySearch(arr, 10);
    return 0;
}