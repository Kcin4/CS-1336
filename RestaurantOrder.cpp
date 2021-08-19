#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;

const int MAXPRODUCTS = 100;
string names[MAXPRODUCTS];
double prices[MAXPRODUCTS];
string codes[MAXPRODUCTS];
int numProducts = 0;

void readConfiguration() {
    ifstream finput("menu.txt");

    for(int i=0; i<MAXPRODUCTS; i++){
        finput >> codes[i] >> names[i] >> prices[i];
        numProducts++;
    }

    finput.close();
}

//return valid index if the item is found, return -1 otherwise.
int findItem(string inputCode) {
    for(int i=0; i<numProducts; i++)
        if (inputCode == codes[i])
            return i;

    return -1;
}

// read order string like “A1 A1 E1 E2 S1” and generate the restaurant bill.
// Output the item name and price in each line, total in the final line.
void process() {
    double total=0;
    string line;
    cout << fixed << setprecision(2);
    getline(cin, line);
    istringstream istr(line);
    string inputCode;
    while(istr >> inputCode){
        findItem(inputCode);
        if (prices[findItem(inputCode)]==0)
            cout << inputCode << " is invalid. Skipping it." << endl;
        else
            cout << names[findItem(inputCode)] << ": $" << prices[findItem(inputCode)] << endl;
        total += prices[findItem(inputCode)];
    }
    cout << "Total: $" << total;
}

int main() {
    readConfiguration();
    process();
}
