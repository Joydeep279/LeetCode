#include <iostream>
#include <vector>
using namespace std;

long long arrToDigit(vector<long long> arr)
{
    long long count = 0;

    for (long long i = 0; i < arr.size(); i++)
    {

        count = count * 10 + arr[i];
        cout << count << " ";
    }
    count += 1;
    return count;
}

vector<long long> digitToArray(long long digit)
{
    vector<long long> temp;
    while (digit)
    {
        temp.push_back(digit % 10);
        digit /= 10;
    }
    long long i = 0, j = temp.size() - 1;
    while (i <= j)
        swap(temp[i++], temp[j--]);
    return temp;
}
int main()
{
    vector<long long> given = {{9, 8, 7, 6, 5, 4, 3, 2, 1, 0}};
    for (long long i = 0; i < given.size(); i++)
    {
        cout << given[i];
    }
    cout << endl;
    long long digit = arrToDigit(given);
    cout << digit << endl;
    vector<long long> result = digitToArray(digit);

    for (long long i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}