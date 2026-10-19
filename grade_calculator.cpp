
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    string name;
    int math, physics, computer;
    double average;

    cout << "Enter Student Name: ";
    getline(cin, name);

    // Validate Mathematics score
    cout << "Enter Mathematics score (0-100): ";
    while (!(cin >> math) || math < 0 || math > 100) {
        cout << "Invalid score! Enter a number from 0 to 100: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Validate Physics score
    cout << "Enter Physics score (0-100): ";
    while (!(cin >> physics) || physics < 0 || physics > 100) {
        cout << "Invalid score! Enter a number from 0 to 100: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Validate Computer score
    cout << "Enter Computer score (0-100): ";
    while (!(cin >> computer) || computer < 0 || computer > 100) {
        cout << "Invalid score! Enter a number from 0 to 100: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    average = (math + physics + computer) / 3.0;

    cout << "\n===== STUDENT RESULT =====\n";
    cout << "Student Name: " << name << '\n';
    cout << fixed << setprecision(2);
    cout << "Average Score: " << average << '\n';

    if (average >= 70)
        cout << "Grade: Excellent\n";
    else if (average >= 60)
        cout << "Grade: Very Good\n";
    else if (average >= 50)
        cout << "Grade: Good\n";
    else if (average >= 45)
        cout << "Grade: Pass\n";
    else
        cout << "Grade: Fail\n";

    cout << "==========================\n";

    return 0;
}

