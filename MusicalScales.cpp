#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

int main() {

    int numNotes=0;
    char testNote;
    bool A=true, ASharp=true, B=true, BSharp=true, C=true, CSharp=true, D=true, DSharp=true, E=true, ESharp=true, F=true, FSharp=true, G=true, GSharp=true;
    string line;

    cin >> numNotes;
    for(int i=0; i<numNotes; i++){
        getline(cin, line);
        if (testNote=='A#' or testNote=='C' or testNote=='D#' or testNote=='F' or testNote=='G'){
            A=false;
            }
        }
    if (A=true)
        cout << "A";
    cout << testNote;
}
