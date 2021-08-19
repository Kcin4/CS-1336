#include <iostream>
using namespace std;

/* Get hourly pay rate & # of hours from the user, compute & output the weekly pay,
 but do not pay for the extra hours beyond 50. Also, for the overtime hours, (hours beyond regular 40 hours),
 pay at 1.5 times regular rate. */

int main()  {
    double payRate=0, hours=0;
    cout << "Input hourly pay rate: ";
    cin >> payRate;

    cout << "Input # of hours: ";
    cin >> hours;

    if (hours <= 40)
    cout << "Your weekly pay: " << (payRate * hours);

    else if (hours > 40 && hours <= 50)
    cout << "Your weekly pay: " << (payRate * 40) + ((hours - 40) * (1.5 * payRate));

    else if (hours > 50)
    cout << "Your weekly pay: " << (payRate * 40) + (15 * payRate);

}
