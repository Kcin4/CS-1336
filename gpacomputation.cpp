#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

// Do not change this function!
// A -> 4, B -> 3, C -> 2, D -> 1, otherwise return 0
int letterToPoints(char grade) {
   if (grade == 'A')
      return 4;
   if (grade == 'B')
      return 3;
   if (grade == 'C')
      return 2;
   if (grade == 'D')
      return 1;

   return 0;
}

int main() {
   //you can use letterToPoints(grade) to help you with conversion from letter to points
   double numCourses=0, gpaHours=0, i=0, hoursCourse=0, hoursTotal=0, gpa=0;
   char grade;

   cout << "# of courses: ";
   cin >> numCourses;

   for(i=1; i<=numCourses; i++){
    cout << fixed << setprecision(0) << "Enter credit hours & grade for course #" << i << ": ";
    cin >> hoursCourse >> grade;
    gpaHours += letterToPoints(grade) * hoursCourse;
    hoursTotal += hoursCourse;
    gpa = gpaHours / hoursTotal;
    if(numCourses>i)
        cout << fixed << setprecision(2) << "GPA so far: " << gpa << endl;
    else
        cout << fixed << setprecision(2) << "Final GPA: " << gpa << endl;
   }
}
