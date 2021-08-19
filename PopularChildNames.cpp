#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

const int MAXCOUNT = 1000000;
string names[MAXCOUNT];
int frequency[MAXCOUNT];
int namesCount = 0;

void checkAndAdd(string input) {
    for (int i=0; i<namesCount; i++)
        if (input == names[i]){
            frequency[i]++;
            return;
        }
        names[namesCount] = input;
        frequency[namesCount] = 1;
        namesCount++;
}

int findMaxIndex() {
    int maxIndex = 0;
    for (int i=1; i<namesCount; i++)
        if (frequency[i] > frequency[maxIndex])
        maxIndex = i;

    return maxIndex;
}

int main() {
    ifstream finput("names.txt");
    string inputName="";

    while (finput >> inputName)
        checkAndAdd(inputName);

    for (int i=0; i<namesCount; i++)
        cout << names[i] << ": " << frequency[i] << endl;

    int maxIndex = findMaxIndex();
    cout << "Most popular name: " << names[maxIndex] << " - occured " << frequency[maxIndex] << " times.\n";

    cout << "\n10 popular names:\n"; // top 10 popular names
    for (int i=0; i<10; i++) {
        int maxIndex = findMaxIndex();
        cout << names[maxIndex] << " - occured " << frequency[maxIndex] << " times.\n";
        frequency[maxIndex] = 0;
    }
}
