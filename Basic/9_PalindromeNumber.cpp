#include <iostream>
using namespace std;

int main()
{
    int data;
    cout << "Enter the Data: ";
    cin >> data;

    int result = 0;
    int temp = data;
    while (temp != 0)
    {

        int rem = temp % 10;
        result = (result * 10) + rem;

        temp /= 10;
    }

    cout << "Data: " << data;
    cout << "Result: " << result << endl;

    return 0;
}