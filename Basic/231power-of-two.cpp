#include <iostream>
using namespace std;

int main()
{

    int data;
    bool flag = false;
    cout << "Enter the Number: ";
    cin >> data;
    while (data > 1)
    {
        if (data % 2 == 1)
        {
            flag = true;
        }
        data/=2;
    }
    if (flag)
    {
        cout << "False!!";
    }
    else
    {
        cout << "True!!";
    }

    return 0;
}