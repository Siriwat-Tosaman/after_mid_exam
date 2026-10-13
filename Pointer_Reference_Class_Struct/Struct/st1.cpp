#include <iostream>
using namespace std;

struct Student {
    int id;
    double gpa;
} ;

int main() {

    Student s;
    s.id = 1;
    s.gpa = 3.5;

    cout << "---- Student ----" << endl;
    cout << "Student ID : " << s.id << endl;
    cout << "GPA : " << s.gpa << endl;

    return 0;
}