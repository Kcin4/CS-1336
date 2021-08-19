#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

const int MAXLIMIT = 10000;

int x[MAXLIMIT], y[MAXLIMIT];
double radius[MAXLIMIT]={0};
int numBubbles = 0, width=0, height=0;

//returns the distance between (x1, y1) and (x2, y2)
double dist(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}

double findMaxRadius(int index) {
    int maxRadius=MAXLIMIT, xTest=0, yTest=0, smallestDist=0;

    xTest = 400 - x[index];
    yTest = 400 - y[index];

    if(x[index]<xTest)
        smallestDist=x[index];
    else
        smallestDist=xTest;
    if(y[index]<yTest && y[index]<smallestDist)
        smallestDist=y[index];
    else if(yTest<y[index] && yTest<smallestDist)
        smallestDist=yTest;

    for(int i=0; i<numBubbles; i++){
        int number=MAXLIMIT;
        number = dist(x[index], y[index], x[i], y[i]) - radius[i];
        if (number<smallestDist && index!=0)
            smallestDist = number;
    }

    maxRadius = smallestDist;
    return maxRadius;
}

int main()
{
    cin >> width >> height >> numBubbles;
    for(int i=0; i<numBubbles; i++) {
        cin >> x[i] >> y[i];
        radius[i] = findMaxRadius(i);
    }
    for(int i=0; i<numBubbles; i++)
        cout << radius[i] << endl;
}

