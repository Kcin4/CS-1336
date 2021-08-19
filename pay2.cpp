#include <iostream>
using namespace std;

int main()  {
    double payRate=0, hours=0;
    cout << "Input hourly pay rate: ";
    cin >> payRate;

    cout << "Input # of hours: ";
    cin >> hours;

    if (hours <= 50)
    cout << "Your weekly pay: " << payRate * hours;
    else
        cout << "Your weekly pay: " << payRate * 50;
}
    //v4
    cout << "Your weekly pay: " << (hours <= 50? payRate * hours: payRate * 50);
