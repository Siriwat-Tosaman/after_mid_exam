#include <iostream>
#include <string>
using namespace std;

int passGen(string user) {
    long long pass = 0;
    int n = user.size();

    if ((int)user[0] % 10 == 0) {
        //เพิ่มเลข 0 เข้าด้านหน้า
    }
    for (int i = 0; i < n; i++) {
        int digit = (int)user[i] % 10;
        pass = pass * 10 + digit;
    }
    return pass;
}

int main() {
    string username;
    getline(cin, username);
    long long password = passGen(username);
    cout << password;

    return 0;
}