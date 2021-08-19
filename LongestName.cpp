#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

int main() {
    string input = "", longName="";
    int longest=0;
    while (cin >> input) {
        if (input == "end") //end of list?
            break;
        if (input.length()>longest){
            longName = input;
            longest = input.length();
        }
        else if (input.length()==longest)
            longName += " " + input;
    }
    cout << longName;
}
