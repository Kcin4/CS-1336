#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

int main() {
    int numMax=1001, numMin=1, i=0;
    string response;

    while (response!="correct"){
        i++;
        int mid = (numMax+numMin)/2;
        if (response=="lower")
            numMax=mid;
        else if (response=="higher")
            numMin=mid;
        mid = (numMax+numMin)/2;
        cout << mid << endl;
        fflush(stdout);
        if (i>=10)
            break;
        cin >> response;
    }
}
