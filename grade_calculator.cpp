#include <iostream>
using namespace std;

int main() {

    string name;
    int math, physics, computer;
    float average;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Mathematics score: ";
    cin >> math;

    cout << "Enter Physics score: ";
    cin >> physics;

    cout << "Enter Computer score: ";
    cin >> computer;

    average = (math + physics + computer) / 3.0;

    cout << "\nAverage Score: " << average << endl;

    if (average >= 70)
        cout << "Grade: Excellent";
    else if (average >= 60)
        cout << "Grade: Very Good";
    else if (average >= 50)
        cout << "Grade: Good";
    else if (average >= 45)
        cout << "Grade: Pass";
    else
        cout << "Grade: Fail";

    return 0;
}
