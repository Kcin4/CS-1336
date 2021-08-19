#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

void SwapValues(int& userVal1, int& userVal2) {
    int temp = userVal1;
    userVal1 = userVal2;
    userVal2 = temp;
}
int main() {
    int x=0, y=0;
    cin >> x >> y;
    SwapValues(x, y);
    cout << x << " " << y << endl;

    return 0;
}
