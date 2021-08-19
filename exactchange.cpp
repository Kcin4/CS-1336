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
    int change;
    int dollars, quarters, dimes, nickels, pennies;

    cin >> change;

    if (change=0)

        cout << "No change." << endl;

    dollars = floor(change / 100);

        if (dollars>1)

            cout << dollars << " dollars." << endl;

        else if (dollars=1)

            cout << dollars << " dollar." << endl;

    quarters = floor((change - (100 * dollars))/25);

        if (quarters>1)

            cout << quarters << " quarters." << endl;

        else if (quarters=1)

            cout << quarters << " quarter." << endl;

    dimes = floor((change - (100 * dollars) - (25 * quarters))/10);

        if (dimes>1)

            cout << dimes << " dimes." << endl;

        else if (dimes=1)

            cout << dimes << " dime." << endl;


    nickels = floor((change - (100 * dollars) - (25 * quarters) - (dimes * 10))/5);

        if (nickels>1)

            cout << nickels << " nickels." << endl;

        else if (nickels=1)

            cout << nickels << " nickel." << endl;

    pennies = (change - (100 * dollars) - (25 * quarters) - (dimes * 10) - (nickels * 5));

        if (pennies>1)

            cout << pennies << " pennies." << endl;

        else if (dimes=1)

            cout << pennies << " penny." << endl;

}
