// #include <iostream>
#include <math.h>
// using namespace std;
// int length(int data)
// {
//     int sum = 0;
//     while (data)
//     {
//         sum = sum + 1;
//         data = data / 10;
//     }
//     return sum;
// }

// bool isArmstrong(int data)
// {
//     int temp = data;
//     int degree = length(data);
//     int sum = 0;
//     while (temp)
//     {
//         sum = sum + pow(temp % 10, degree);
//         temp = temp / 10;
//     }
//     return (data == sum);
// }

// int main()
// {
//     int data;
//     cout << "Enter the Data: ";
//     cin >> data;

//     if (isArmstrong(data))
//     {
//         cout << "Yes!";
//     }
//     else
//     {
//         cout << "NOT!";
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

// Function to calculate the number of digits in a number
int length(int data)
{
    int count = 0;
    while (data)
    {
        count++;
        data /= 10;
    }
    return count;
}

// Function to calculate power (optimized without using pow from math.h)
int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

// Function to check if a number is an Armstrong number
bool isArmstrong(int data)
{
    int temp = data;
    int degree = length(data);
    int sum = 0;

    while (temp)
    {
        sum =sum+ pow(temp % 10, degree);
        cout<<pow(temp % 10, degree)<<endl; 
        cout<<sum<<endl;
        temp /= 10;
    }

    return (data == sum);
}

// Main function
int main()
{
    int data;
    cout << "Enter the Data: ";
    cin >> data;

    if (data < 0)
    {
        cout << "Invalid input! Please enter a non-negative integer." << endl;
        return 1; // Exit with an error code for invalid input
    }

    if (isArmstrong(data))
    {
        cout << data << " is an Armstrong number!" << endl;
    }
    else
    {
        cout << data << " is not an Armstrong number!" << endl;
    }

    return 0;
}
