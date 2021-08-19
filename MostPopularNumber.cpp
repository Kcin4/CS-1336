#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

//let us assume we won't go over 100 numbers
const int MAXITEMS = 100;
int numbers[MAXITEMS];
int numItems;  //# of actual numbers

//returns the frequency of searchNum in the array numbers[]
int findFreq(int searchNum) {
   int freq = 0;
   for(int i=0; i<numItems; i++)
      if (numbers[i] == searchNum)
         freq++;

   return freq;
}

int main() {
    string line;

    getline(cin, line);
    istringstream istr(line);
    while (istr >> numbers[numItems])
        numItems++;

    int popularNumberSoFar=0, popularCount=0;
    for(int i=0; i<numItems; i++){
        int frequency = findFreq(numbers[i]);
        if (frequency > popularCount){
            popularCount = frequency;
            popularNumberSoFar = numbers[i];
        }
    }
    cout << popularNumberSoFar << " occurred " << popularCount << " times.";
}
