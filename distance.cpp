#include <iostream>
#include <iomanip> //input & output manipulation

using namespace std;

int main() {
    int hour1=0, minute1=0, second1=0, hour2=0, minute2=0, second2=0;
    double speed=0;
    char temp;

    cin >> hour1 >> temp >> minute1 >> temp >> second1;
    cin >> speed;
    cin >> hour2 >> temp >> minute2 >> temp >> second2;

    //compute the time difference
    int time1 = (hour1 * 60 + minute1) * 60 + second1;
    int time2 = (hour2 * 60 + minute2) * 60 + second2;

    double distance = speed * (time2-time1) / 3600;

    //multiply with speed to find the distance travelled

    cout << fixed << setprecision(2) << distance << " kms";

    return 0;
}
