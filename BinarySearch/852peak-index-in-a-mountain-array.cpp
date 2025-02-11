#include <iostream>
using namespace std;
int Peak(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        // int mid = start+(end-start)/2;
        int mid = end + (start - end) / 2;
        cout << start << " " << end << " " << mid << endl;
        if (arr[mid - 1] < arr[mid] && arr[mid + 1] < arr[mid] || arr[mid] > arr[mid - 1])
        {
            return mid;
        }
        else if (arr[mid - 1] < arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return size - 1;
}
int main()
{

    int arr[] = {3, 5, 3, 2, 0};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << Peak(arr, len);
    return 0;
}