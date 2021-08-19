#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

int main() {
    int array[10000], numItems=0, numMax=0, numMin=0;
//let us assume user input will not exceed these many numbers.
//do not use getline() & istringstream.
    cin >> numItems;

    for(int i=0; i<numItems; i++){
        cin >> array[i];
    }
    cin >> numMin >> numMax;
    if (numMin>numMax){
        int temp = numMax;
        numMax = numMin;
        numMin = temp;
        }
    for(int i=0; i<numItems; i++)
        if (array[i]>=numMin && array[i]<=numMax)
            cout << array[i] << " ";
    cout << endl;
}
