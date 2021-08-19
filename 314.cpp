#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()  {
    double grade;

    cout << "Enter weighted total: ";
    cin >> grade;

    if (grade >= 97)
    cout << "Final Grade: A+";

    else if (grade < 97 && grade >= 94)
    cout << "Final Grade: A";

    else if (grade < 94 && grade >= 90)
    cout << "Final Grade: A-";

    else if (grade < 90 && grade >= 87)
    cout << "Final Grade: B+";

    else if (grade < 87 && grade >= 84)
    cout << "Final Grade: B";

    else if (grade < 84 && grade >= 80)
    cout << "Final Grade: B-";

    else if (grade < 80 && grade >= 77)
    cout << "Final Grade: C+";

    else if (grade < 77 && grade >= 74)
    cout << "Final Grade: C";

    else if (grade < 74 && grade >= 70)
    cout << "Final Grade: C-";

    else if (grade < 70 && grade >= 67)
    cout << "Final Grade: D+";

    else if (grade < 67 && grade >= 64)
    cout << "Final Grade: D";

    else if (grade < 64 && grade >= 60)
    cout << "Final Grade: D-";

    else if (grade < 60)
    cout << "Final Grade: F";
}
