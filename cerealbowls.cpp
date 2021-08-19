#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

int main() {
    int numBowls=0, numDays=0, bowlpDay=0, bowlsThatDay=0, numUsed=0;
    string line;
    getline(cin, line);
    istringstream sinput(line);
    sinput >> numBowls;
    while(sinput >> numDays >> bowlpDay){
        for(int i=1; i<=numDays; i++){
        cin >> bowlsThatDay;
        if(bowlsThatDay>=bowlpDay)
            numUsed = numUsed + 1;
        }
    }
    cout << numUsed << endl;
}
