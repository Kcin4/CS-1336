#include <iostream>
#include <cstdlib>

using namespace std;

double perPoundValues[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};  //in dollars
double availableWeights[] = {1, 5, 2, 3, 5, 2, 8, 4, 2, 3}; //in pounds
int numItems = 10;

double maxValue(double target){
    int Value=0, weightAdded=0;
    int i=0;
    while(weightAdded<target){
        if (availableWeights[i]==0)
            i++;
        weightAdded++;
        availableWeights[i]--;
        Value += perPoundValues[i];
    }
    return Value;
}

int main() {
   double target;
   cin >> target;
   cout << maxValue(target);
}
