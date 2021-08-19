#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    ifstream finput("cowfind.in");
    ofstream foutput("cowfind.out");
    int count=0;

    string input;
    finput >> input;
    int n = input.length();

    for (int i=0; i<n; i++){
        if (input[i] == '(' && input[i+1] == '(')
            for (int j=i; j<n; j++)
                if(input[j]==')' && input[j+1]==')')
                    count++;
        }


    foutput << count;
    foutput.close();
}
