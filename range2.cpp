#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number = 0;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number <0)
        cout << "You are too negative!";
    else if (number ==0)
        cout << "Don't be a zero!";
    else
        cout << "You are good!";
}
