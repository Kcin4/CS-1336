#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

int main() {
    int numStones=0;
    string line, playerOne, playerTwo, Winner;

    getline(cin, line);
    stringstream(line) >> playerOne >> playerTwo >> numStones;
    for(int i=0, previ=0, take=1, counter=1; i<numStones; i+=take) {
        take+=previ;
        previ = take - previ;
        ++counter;
        if(counter%2==0)
            Winner=playerTwo;
        else
            Winner=playerOne;
    }
    cout << Winner << " wins!" << endl;
}
