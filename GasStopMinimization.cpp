#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

int numStations = 0; //# of gas stations
const int MAXSTATIONS = 100;
int distances[MAXSTATIONS] = {}; //first entry is not gas station
int range; //range of the car, distance it can go with full tank of gas

int minGasSTops(int milesToDestinaton) {
// drive to next stop
// determine if you can reach the next gas station with gas left
// fill up at gas station if you can't
// increase counter for gas station stops
// output gas station mile marker if you filled
// repeat until destination
// return number of gas station stops
    int stops=0, fullTank=range;
    for(int i=0; i<MAXSTATIONS; i++){
        if (milesToDestinaton<range)
            break;
        range -= (distances[i] - distances[i-1]);
        milesToDestinaton -= (distances[i] - distances[i-1]);
        if (distances[i+1]-distances[i]>range){
            stops++;
            range=fullTank;
            cout << distances[i] << " ";
        }
    }
    return stops;
}

//extract the entries from line and put the data into specified array.
//returns # of entries stored in array
int extract(string line, int array[]) {
    istringstream istr(line);
    int index = 0;  //index 0 is used by starting position
    while (istr >> array[index])
        index++;
    return index;
}

int main() {
    string line;
    int distToDestination;

    getline(cin, line);
    numStations = extract(line, distances);

    cin >> range >> distToDestination;

    cout << minGasSTops(distToDestination);
}
