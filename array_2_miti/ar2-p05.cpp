#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, matrix2[3][3] = {{3, 6, 9}, {8, 5, 2}, {1, 3, 6}};
    int matrixPlus[3][3] = {};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrixPlus[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix1[i][j] > 0) {
                cout << "  ";
            }
            cout << matrix1[i][j] << " ";
        }
        if (i == 1) {
            cout << " + ";
        }
        else {
            cout << "   ";
        }

        for (int k = 0; k < 3; k++) {
            if (matrix2[i][k] > 0) {
                cout << " ";
            }
            cout << matrix2[i][k] << " ";
        }
        if (i == 1) {
            cout << " = ";
        }
        else {
            cout << "   ";
        }

        for (int l = 0; l < 3; l++) {
            if (matrix2[i][l] > 0) {
                cout << " ";
            }
            cout << matrixPlus[i][l] << " ";
        }
        cout << endl;
    }

    return 0;
}