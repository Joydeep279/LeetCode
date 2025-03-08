#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;

    if (num == 0)
        num = 0;
    else if (num % 9 == 0)
        num = 9;
    else
        num = num % 9;

    cout << "Num: " << num << endl;
    return 0;
}
