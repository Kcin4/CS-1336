#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

int bins[100];
int numBins;

//returns the index of bin with lowest value
int findSmallest() {
    int smallestSoFar = bins[0];
    int smallIndex = 0;

    for(int i=1; i<numBins; i++)
    if (smallestSoFar > bins[i]) {
        smallestSoFar = bins[i];
        smallIndex = i;
    }
    return smallIndex;
}

int main()
{
    string line;
    getline(cin, line);
    istringstream istr(line);
    cin >> numBins;

   //extract the numbers from istr
    int number=0;
    while(istr >> number)
        bins[findSmallest()] += number;

    for(int i=0; i<numBins; i++)
        cout << bins[i] << " ";
}
