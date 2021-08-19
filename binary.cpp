#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    int x = 0;
    cin >> x;
    while (x > 0) {
        cout << x%2;
        x = x / 2;
    }

}
