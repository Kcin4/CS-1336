#include <iostream>
#include <iomanip> //input & output manipulation

using namespace std;

int main() {
    double weight=0;

    cout << "Enter the weight for Bananas: ";
    cin >> weight;
    double total = 0.89 * weight;

    cout << "Enter the weight for Apples: ";
    cin >> weight;
    total += 1.19 * weight;

    cout << "Enter the weight for Oranges: ";
    cin >> weight;
    total += 0.99 * weight;

    cout << "Enter the weight for Cucumbers: ";
    cin >> weight;
    total += 1.29 * weight;

    cout << "Enter the weight for Cherries: ";
    cin >> weight;
    total += 8.99 * weight;

    cout << fixed << setprecision(2) << total;

}
