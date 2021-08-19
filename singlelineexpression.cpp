#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

int main() {

    string equation;
    double value1=0, value2=0;
    char operation;

    getline(cin,equation);
    istringstream sinput(equation);
    sinput >> value1;
    while(sinput >> operation >> value2) {
        if (operation == '+')
            value1 += value2;
        else if (operation=='-')
            value1 -= value2;
        else if (operation=='*')
            value1 *= value2;
        else if (operation=='/')
            value1 /= value2;
    }
    cout << value1;


}
