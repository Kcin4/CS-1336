#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

int main() {

    int capacity=0, numLines=0;

    cin >> capacity >> numLines;

    int usage=0, numRejections=0;

    for(int i=0; i<numLines; i++){
        string operation="";
        int groupSize=0;

        cin >> operation >> groupSize;

        if (operation == "leave")
            usage -= groupSize;
        else{
            usage += groupSize;
            if (usage > capacity) {
                numRejections++;
                usage -= groupSize;
            }
        }

    }
    cout << numRejections << endl;
}
