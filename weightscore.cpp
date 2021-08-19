/*
Compute the weighted score for a course based on individual items’ scores. Let us say there are only 3 assignments & 2 exams, each with max score of 100.
Respective weights are (10%, 10%, 10%, 35% and 35%). Get 5 scores as the input from the user, compute and output the weighted score.
Output the weighted score rounded to one fractional digit. Here is a sample input & output:

Enter the score for Assignment 1: 55
Enter the score for Assignment 2: 95
Enter the score for Assignment 3: 79.5
Enter the score for Exam 1: 71.5
Enter the score for Exam 2: 85.2
Your weigh
#include <iostream>
#include <iomanip>

ted score: 77.8
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()  {
    double grade=0;

    cout << "Enter Assignment 1 grade: ";
    cin >> grade;
    double total = 0.10 * grade;

    cout << "Enter Assignment 2 grade: ";
    cin >> grade;
    total += 0.10 * grade;

    cout << "Enter Assignment 3 grade: ";
    cin >> grade;
    total += 0.10 * grade;

    double test=0;

    cout << "Enter Test 1 grade: ";
    cin >> test;
    total += 0.35 * test;

    cout << "Enter Test 2 grade: ";
    cin >> test;
    total += 0.35 * test;

    cout << fixed << setprecision(1) << total;

}
