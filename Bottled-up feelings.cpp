#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

int main() {
    int volumeOne=0, volumeTwo=0, volumeTotal=0, numOne=0, numTwo=0, temp=0;
    string line;

    getline(cin, line);
    stringstream(line) >> volumeTotal >> volumeOne >> volumeTwo;
    if(volumeOne>=volumeTotal or volumeTwo>=volumeTotal or volumeTotal>=10000000 or volumeOne<volumeTwo)
        cout << "Impossible" << endl;
    else if (volumeTotal % volumeOne == 0) {
        numOne = volumeTotal / volumeOne;
        cout << numOne << " " << numTwo << endl;
    }
    else{
        temp = volumeTotal % volumeOne;
        numOne = (volumeTotal - temp) / volumeOne;
        volumeTotal = volumeTotal - temp;
        numTwo = volumeTotal / volumeTwo;
        cout << numOne << " " << numTwo << endl;
        }
}
