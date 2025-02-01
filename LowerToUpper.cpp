#include <iostream>
using namespace std;
char Convert(char given)
{

    return given - 'a' + 'A';
}
int main()
{
    char ch = 'A';
    cout << "Enter the Char: ";
    cin >> ch;
    cout << "Converted: " << Convert(ch);

    return 0;
}