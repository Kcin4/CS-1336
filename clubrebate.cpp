#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double purchase, refundPerc, refundAmt;
    cin >> purchase;
    if (purchase>=1000){
        cout << fixed << setprecision(1);
        refundPerc = 2 + (floor(purchase / 1000) * 0.1) - 0.1;
        if (refundPerc>4)
            refundPerc=4;
    cout << "Your refund rate: " << refundPerc << "%" << endl;
    cout << fixed << setprecision(2);
    refundAmt = purchase * (refundPerc / 100);
    cout << "Your refund amount: $" << refundAmt;
    }
    if (purchase<1000)
        cout << "Sorry, minimum $1000 is required to qualify for a refund.";

}
