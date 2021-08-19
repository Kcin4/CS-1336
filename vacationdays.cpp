#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*
All employees, by default, get 2 weeks of vacation per year (that is, 10 vacation days).
All employees who have served the company for 3 years get 3 weeks of vacation (that is,
15 vacation days). All employees who have served more than 3 years get 2 additional days for
vacation for each additional year upto 6 years. All employee who have served more than 6 years get
1 additional day for each additional year of service. Write the code to accept # of years of service
as input and output the # of vacation days. Here are couple of sample inputs & outputs.
*/

int main()
{
    int years=0, days=0;

    cout << "Enter # of years of service: ";
    cin >> years;

    if (years < 3)
        days=10;

    if (years >= 3 && years < 6)
        days = 15 + (2 * (years - 3));

    if (years >= 6)
        days = 21 + (1 * (years - 6));

    cout << "# of vacation days: " << days;
}
