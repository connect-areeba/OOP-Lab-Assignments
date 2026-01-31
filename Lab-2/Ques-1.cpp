/*1. Write a program in which a class named student has member variables name, roll_no, semester
and section. Create 4 objects of this class to store data of 4 different students, now display data
of only those students who belong to section A.*/

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll_no;
    string semester;
    string section;
};

int main() {
    Student s[4];

    for(int i = 0; i < 4; i++) {
        cout << "\nEnter details of student " << i + 1 << endl;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Roll No: ";
        cin >> s[i].roll_no;
        cout << "Semester: ";
        cin >> s[i].semester;
        cout << "Section: ";
        cin >> s[i].section;
    }

    cout << "\n=====STUDNETS FROM SECTION A=====:\n";
    for(int i = 0; i < 4; i++) {
        if(s[i].section == "A" || s[i].section == "a") {
            cout << "\nName: " << s[i].name;
            cout << "\nRoll No: " << s[i].roll_no;
            cout << "\nSemester: " << s[i].semester;
            cout << "\nSection: " << s[i].section << endl;
        }
    }

    return 0;
}
