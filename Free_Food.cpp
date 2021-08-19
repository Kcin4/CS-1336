#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

int main() {
    int numEvents=0, startDay=0, endDay=0, freeFoodDays=0, freeDays[366]={};

    cin >> numEvents;
    for(int i=0; i<numEvents; i++){
        cin >> startDay >> endDay;
        for(int i=startDay; i<=endDay; i++)
            freeDays[i]++;
    }
    for(int i=0; i<=365; i++){
        if (freeDays[i]>0)
            freeFoodDays++;
    }
    cout << freeFoodDays;
}
