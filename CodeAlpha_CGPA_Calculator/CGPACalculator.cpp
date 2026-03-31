#include <iostream>
using namespace std;

int main() {
    int courses;
    float grade, credit;
    float totalCredits = 0;
    float totalGradePoints = 0;

    cout << "Enter total number of courses: ";
    cin >> courses;

    for(int i = 1; i <= courses; i++) {
        cout << endl;
        cout << "Course " << i << endl;

        cout << "Enter grade points: ";
        cin >> grade;
        cout << "Enter credit hours: ";
        cin >> credit;

        totalCredits += credit;
        totalGradePoints += grade * credit;
    }

    float cgpa = totalGradePoints / totalCredits;
    cout << endl;

    cout << "Total Credits: " << totalCredits << endl;
    cout << "CGPA: " << cgpa << endl;
    return 0;
}