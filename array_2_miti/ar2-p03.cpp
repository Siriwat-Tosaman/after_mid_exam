#include <iostream>
using namespace std;

int main() {
    float termo[3][3], max[3] = {}, sum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> termo[i][j];
            sum += termo[i][j];
            if (termo[i][j] > max[i]) {
                max[i] = termo[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        cout << "day " << i + 1 << " highest temp = " << max[i] << endl;
    }
    cout << "Average temperature = " << sum / 9 << endl;
    cout << sizeof(termo) / sizeof(termo[0][0]);
    //sizeof(termo) == คือพื้นที่ที่จองไว้เป็นของ int คือ 4byte ดังนั้นจะได้ทั้งหมด 36byte และถ้านำช่อง 1 ช่องไปหารจะได้จำนวนช่องของ array[][] ทั้งหมด
    return 0;
}