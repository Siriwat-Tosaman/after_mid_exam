#include <iostream>
using namespace std;

struct Student {
    int id;
    double gpa;
} ;

void print(const Student &t) {
    cout << t.id << " " << t.gpa;
}

int main() {

    Student s = {1, 3.5};
    Student *p = &s;
    p -> gpa = 3.8;

    print(s);
    return 0;
}