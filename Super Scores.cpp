#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

int main() {
    int numSections, numTakes, *maxScores, tempNum=0;
    cin >> numSections >> numTakes;

    maxScores = new int [numSections]; //dynamic memory allocation of array!

    // initialize the array
    for(int i=0; i<numSections; i++)
      maxScores[i] = 0;

    for(int i=0; i<numTakes; i++){
        for(int i=0; i<numSections; i++){
            cin >> tempNum;
            if(tempNum>maxScores[i])
                maxScores[i]=tempNum;
        }

    }

    //output the max score for each section and compute & output total too.
    int total = 0;
    for(int i=0; i<numSections; i++) {
      cout << maxScores[i] << " ";
      total += maxScores[i];
    }
    cout << total;
    }
