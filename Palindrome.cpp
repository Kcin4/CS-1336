#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool palindromeCheck(string word){
    int lastIndex = word.length()-1;
    for (int i=0; i<=lastIndex; i++){
        if (word[lastIndex] == ' ')
            lastIndex--;
        if (word[i] == ' ')
            continue;
        if (word[i] != word[lastIndex])
            return false;
        lastIndex--;
    }
    return true;
}
int main() {
    string line;
    getline(cin, line);

    cout << line << " is" ;
    if (!palindromeCheck(line))
        cout << " not";
    cout << " a palindrome" << endl;

   return 0;
}
