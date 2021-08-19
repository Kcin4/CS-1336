#include <iostream>
#include <fstream> //for file operations
#include <string>
#include <iomanip>

using namespace std;

int main() {
   //instead of hardcoding the filename, we will ask the user!
    string filename;
    cin >> filename;

    //open the file and get ready for reading!
    ifstream finput(filename.c_str());

    char operation;
    double amount = 0, balance = 0;

    cout << fixed << setprecision(2);
    //if read operation is successful, process it!
    while (finput >> operation >> amount) {
        cin >> operation;
        cin >> amount;
        if(operation=='D'){
            balance += amount;
            cout << "Deposit $" << amount << endl;
            cout << "Balance: $" << balance << endl;
            cout << endl;
        }
        else if(operation=='W'){
            cout << "Withdraw $" << amount << endl;
            if(amount>balance){
                cout << "Insufficient money in the account!" << endl;
                cout << "Balance: $" << balance << endl;
                cout << endl;
            }
            else{
            balance -= amount;
            cout << "Balance: $" << balance << endl;
            cout << endl;
            }
        }
    }

    cout << "Final balance: $" << balance;
}
