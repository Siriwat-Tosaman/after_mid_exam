#include <bits/stdc++.h>
using namespace std;

struct Student {
    int id;
    double gpa;
} ;

bool compareByGpa(const Student& a, const Student& b) {
    return a.gpa > b.gpa;
}

void printArr(Student array[], int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i].id << " " << array[i].gpa << endl;
    }
}

int main() {
    int n;
    cin >> n;

    Student user[n] = {};
    for (int i = 0; i < n; i++) {
        cin >> user[i].id >> user[i].gpa;
    }

    sort(user, user + n, compareByGpa);

    printArr(user, n);

    return 0;
}