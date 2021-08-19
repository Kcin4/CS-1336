#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

int sumFactors(int n) {
   int sum=0;
   int half = n/2;
   for(int i=1; i<=half; i++)
    if (n%i == 0)
        sum+=i;
   return sum;
}

int main() {

   int number=0;
   cin >> number;
   int sum = sumFactors(number);
   if(sum == number)
    cout << "perfect";
   else if (abs(sum-number) <= 2)
    cout << "almost perfect";
   else
    cout << "not perfect";

   return 0;
}
