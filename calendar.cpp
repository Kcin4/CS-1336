#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// 0 - Sun, 1 - Mon, 2 - Tue, 3 - Wed, 4 - Thu, 5 - Fri, 6 - Sat
const int START_DAY_FOR_JAN1_1980 = 3; // Tuesday

//returns true if year is leap year
bool isLeapYear(int year) {
    if (year % 4)
        return false;

    // year is divisible by 4
    if (year % 400 == 0)
        return true;

    // year is not divisible by 400
    if (year % 100 == 0)
        return false;

    // year is divisible by 4, but not divisible by 100
    return true;
}

//# of days in the specified month
int getDaysInMonth(int year, int month) {
    //take care of error cases first.
    if (month < 1 || month > 12)
        return 0;

    if (month == 1 || month == 3 || month == 5 || month == 7
        || month == 8 || month == 10 || month == 12)
            return 31;

    if (month == 2)
        return (isLeapYear(year) ? 29 : 28);

    // all other cases: 4, 6, 9, 11
    return 30;
}

// total # of days from Jan 1, 1980
// to reach the first day of specified month of specified year
int getTotalDays(int year, int month);
    int totalDays = 0;

    //add all # of days in previous months
    for(int m=1 ; m<month; m++)
        totalDays += getDaysInMonth(year, m);

    return totalDays;
}

int main() {
    //get the month & year from the user
    int month=0, year=0;
    cin >> month >> year;

    //display the calendar
    //need to determine which day 1st of that month falls on
    //give break after each Saturday

    // gives the day # in the week
    int currentDay = (getTotalDays() + START_DAY_FOR_JAN1_1980) % 7;
    output the necessary # of spaces to get ready to print 1!
    for each day of the month:
        currentDay++;
        check whether it reached 7
            output endl;
            currentDay=0;
}
