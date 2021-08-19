#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int MAXPRODUCTS=1000;
string products[MAXPRODUCTS]; // product names
double prices[MAXPRODUCTS]; // per-pound price for each product
int codes[MAXPRODUCTS]; // PLU codes for the products
int numProducts=0; //actual usage

//read the data from products.txt instead
void setup() {
    ifstream finput("products.txt");

    finput >> numProducts;
    for(int i=0; i<numProducts; i++)
        finput >> codes[i] >> products[i] >> prices[i];

    finput.close();
}

void listProducts() {
    cout << "Available products:\n";
    for(int i=0; i<numProducts; i++)
        cout << codes[i] << " " << products[i] << " @ " << prices[i] << "/lb\n";
}

//return the index of product with specified PLU code, return -1 otherwise.
int findIndex(int plu) {
    // search for plu in codes[] array and return the corresponding index
    for(int i=0; i<numProducts; i++)
        if (plu == codes[i])
            return i;

    return -1;
}

double checkout() {
    double total=0, weight=0;
    int selection=0, inputCode=0;

    cout << fixed << setprecision(2);

    listProducts();
    while (true) {
        cout << "Enter PLU code for your item(0 to end): ";
        cin >> inputCode;
        if (inputCode == 0)
            break;

        selection = findIndex(inputCode); //validate the plu code & find its index
        if (selection < 0) {
            cout << "Invalid PLU. Try again.\n";
            listProducts();
            continue; //restart at the top of the loop & continue with the loop
        }

        cout << "Enter weight for " << products[selection] << ": ";
        cin >> weight;
        double cost = weight * prices[selection];
        total += cost;
        cout << products[selection] << " cost $" << cost << endl;
        cout << "Total so far: $" << total << endl << endl;
    }
    cout << "Total: $" << total << endl << endl;
    return total;
}

int main()
{
    int numCheckouts=0;
    double grandTotal=0;
    char response = 'n';

    setup();
    while (response == 'n') {
        grandTotal += checkout();
        numCheckouts++;
        cout << "Next checkout / Close program (n/c)? ";
        cin >> response;
    }
    //# of checkouts, grand total, average checkout amount
    cout << "# of checkouts: " << numCheckouts << endl;
    cout << "Grand total: $" << grandTotal << endl;
    cout << "Average checkout total: $" << grandTotal/numCheckouts << endl;
}
