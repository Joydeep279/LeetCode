#include <iostream>
using namespace std;

int main()
{
    int data;
    cout << "Enter the Data: ";
    cin >> data;
    int temp;
    int reverse = 0;

    while (data != 0)
    {
        temp = data % 10;
        if (reverse > INT_MAX / 10)
        {
            cout << "OverFlow!!" << endl;
            break;
        }
        if (reverse < INT_MIN / 10)
        {
            cout << "UnderFlow!!" << endl;
            break;
        }
        reverse *= 10;
        reverse += temp;
        data /= 10;
        if (data == 0)
            cout << "Reversed: " << reverse << endl;
    }

    return 0;
}