#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    int binary = 0;
    int result = 0;
    int temp = 1;
    while (n)
    {
        if (n % 2)
            binary = 0 * temp + binary;
        else
            binary = temp + binary;
        temp *= 10;
        n /= 2;
    }
    temp = 1;
    while (binary)
    {

        result += (binary % 10) * temp;
        temp *= 2;
        binary /= 10;
    }
    cout << result;
    return 0;
}