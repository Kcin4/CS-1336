#include <iostream>
#include <cstdlib> //contains min() and max() functions

using namespace std;

int findGCD(int n, int m) {
   int gcd = min(n, m);
   while (n % gcd > 0 || m % gcd > 0){
    gcd--;
   }
   return gcd;
}

int findLCM(int n, int m) {
   int lcm = max(n, m);
   while (lcm % n > 0 || lcm % m > 0) {
    lcm++;
   }
   return lcm;
}

//NO need to touch the following code.
int main() {
   int x, y;
   cout << "Enter 2 numbers: ";
   cin >> x >> y;

   cout << "GCD: " << findGCD(x, y) << " LCM: " << findLCM(x, y) << endl;
}
