#include <bits/stdc++.h>
using namespace std;

/*  function to seggregate negative
    elements from the given array
    and moving them to the end  */

void segregate_elements(int n, vector<int> &arr)
{

    int low = 0, high = n - 1;

    /*  making high point to the last
        non-negative integer in the array */
    while (arr[high] < 0 && high > low)
    {
        high--;
    }

    /*  swap the low integer with high
        whenever we find a negative integer */
    while (low < high)
    {
        if (arr[low] < 0)
        {
            swap(arr[low], arr[high]);
            high--;
        }
        low++;
    }
    return;
}

int main()
{

    // input
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // segregating the array
    segregate_elements(n, arr);

    // output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}