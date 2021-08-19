#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    int time1, time2, time3, time4, hour, minute;
    char c;

    cin >> time1 >> c >> time2;
    cin.clear();
    cin >> time3 >> c >> time4;
    cin.clear();
    hour = time1 - time3;
    if (hour<0)
        hour = hour + 24;
    minute = time2 - time4;
    if (minute<0)
        hour -= 1;
    if (minute<0)
        minute += 60;
    cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute;
}
