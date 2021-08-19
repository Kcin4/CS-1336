#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void printBigNumber(long long n) {
   cout << setfill('0');
   if (n >= 1000) {
      printBigNumber(n / 1000);
      cout << "," << setw(3) << n % 1000;
   } else
      cout << n;
}

int main() {

    int maxLength=0;
    long long result=1;
    cout << "Enter # of characters: ";
    cin >> maxLength;
    for(int letters=0; letters<=maxLength; letters++) {
        result=1;
        int digits = maxLength-letters;
        for(int i=1; i<=letters; i++)
            result *= 26;
        for(int i=1; i<=digits; i++)
            result *= 10;
        cout << "(" <<letters << ", " << digits << "): ";
        printBigNumber(result);
        cout << endl;
    }

}
