#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()  {
    double numBulbs;
    double bulbHours;
    double unitPower;
    double acHours;
    double numFans;
    double fanHours;
    double unitPrice;

    cin >> numBulbs;

    cin >> bulbHours;

    cin >> unitPower;

    cin >> acHours;

    cin >> numFans;

    cin >> fanHours;

    cin >> unitPrice;

    cout << fixed << setprecision(0);
    cout << "Total electricity usage: " << lround(((numBulbs * 60 * bulbHours) + (unitPower * acHours) + (numFans * 40 * fanHours)) * 30 / 1000) << " kWh" << endl;
    cout << fixed << setprecision(1);
    cout << "Bulbs: " << ((numBulbs * 60 * bulbHours) / ((numBulbs * 60 * bulbHours) + (unitPower * acHours) + (numFans * 40 * fanHours)) * 100) << "%";
    cout << " AC: " << ((unitPower * acHours) / ((numBulbs * 60 * bulbHours) + (unitPower * acHours) + (numFans * 40 * fanHours)) * 100) << "%";
    cout << " FANs: " << ((numFans * 40 * fanHours) / ((numBulbs * 60 * bulbHours) + (unitPower * acHours) + (numFans * 40 * fanHours)) * 100) << "%" << endl;
    cout << fixed << setprecision(2);
    cout << "Electricity bill for the month: $ " << (((numBulbs * 60 * bulbHours) + (unitPower * acHours) + (numFans * 40 * fanHours)) * 30 / 1000) * (unitPrice / 100);

}
