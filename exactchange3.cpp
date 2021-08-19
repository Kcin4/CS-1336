#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*Write a program with total change amount as an integer input,
and output the change using the fewest coins, one coin type per
line. The coin types are Dollars, Quarters, Dimes, Nickels, and
Pennies. Use singular and plural coin names as appropriate, like
1 Penny vs. 2 Pennies.
*/

int main()
{
    int change=0;
    int dollars, quarters, dimes, nickels, pennies;

    cin >> change;

    dollars = (change / 100);

    quarters = ((change - (dollars * 100))/25);

    dimes = ((change - (dollars * 100) - (quarters * 25))/10);

    nickels = ((change - (dollars * 100) - (quarters * 25) - (dimes * 10))/5);

    pennies = ((change - (dollars * 100) - (quarters * 25) - (dimes * 10) - (nickels * 5)));
    if (dollars==0 && quarters==0 && dimes==0 && nickels==0 && pennies==0)
        cout << "No change" << endl;

    if (dollars>=1)
        if (dollars==1)
            cout << "1 Dollar" << endl;
        else
            cout << dollars << " Dollars" << endl;
    if (quarters>=1)
        if (quarters==1)
            cout << "1 Quarter" << endl;
        else
            cout << quarters << " Quarters" << endl;
    if (dimes>=1)
        if (dimes==1)
            cout << "1 Dime" << endl;
        else
            cout << dimes << " Dimes" << endl;
    if (nickels>=1)
        if (nickels==1)
            cout << "1 Nickel" << endl;
        else
            cout << nickels << " Nickels" << endl;
    if (pennies>=1)
        if (pennies==1)
            cout << "1 Penny" << endl;
        else
            cout << pennies << " Pennies" << endl;
}
