#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

int main() {

    int numEnt=0, numMax=0, numMin=0, numDif=0, maxDif=0;

    cout << "Enter number: ";
    cin >> numEnt;
    numMax = numEnt;
    numMin = numEnt;
    while(numEnt!=-1){
        if(numEnt>numMax)
            numMax = numEnt;
        if(numEnt<numMin)
            numMin = numEnt;
        numDif = numMax - numMin;
        if(numDif>maxDif)
            maxDif = numDif;
        cout << "Maximum difference: " << maxDif << endl;
        cout << "Enter number: ";
        cin >> numEnt;
    }
    cout << "Maximum difference: " << maxDif << endl;
}
