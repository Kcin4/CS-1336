#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <string> //string
#include <sstream> //string stream
using namespace std;

int main() {

    int fizz, buzz, numN;

    cin >> fizz;
    cin >> buzz;
    cin >> numN;

    for(int i=1; i<=numN; i++) {
        if (i%fizz==0 && i%buzz!=0)
            cout << "Fizz" << endl;
        if (i%buzz==0 && i%fizz!=0)
            cout << "Buzz" << endl;
        if (i%fizz==0 && i%buzz==0)
            cout << "FizzBuzz" << endl;
        else if (i%fizz!=0 && i%buzz!=0)
            cout << i << endl;
    }

}
