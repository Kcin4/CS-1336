#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

int main() {
    double dolValue=0, numRoutes=0, travTime=0, toll=0, bestRoute=1, bestTrav=0;

    cin >> numRoutes;
    cout << "# of routes: " << numRoutes << endl;
    cout << "Dollar value for one minute of your time: ";
    cin >> dolValue;
    for(int i=1; i<=numRoutes; ++i){
        cout << "Travel time for route #" << i << ": ";
        cin >> travTime;
        if (i==1)
            bestTrav=travTime;
        cout << "Toll for route #" << i << ": ";
        cin >> toll;
        if ((bestTrav - travTime) * dolValue > toll) {
            bestRoute=i;
            bestTrav=travTime;
        }
    }
    cout << "Best route is #" << bestRoute << endl;
}
