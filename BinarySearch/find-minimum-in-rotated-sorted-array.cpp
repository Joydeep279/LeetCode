#include <iostream>
using namespace std;

int Solve(int arr[], int len)
{
    int start = 0;
    int end = len - 1;

    while (start <= end)
    {

        int mid = (start + end) / 2;
        if (arr[mid - 1] > arr[mid] && arr[mid + 1] > arr[mid])
        {
            return arr[mid];
        }
        else if (arr[0] < arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return arr[0];
}

int main()
{

    int arr[] = {1};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << Solve(arr, len);
    return 0;
}