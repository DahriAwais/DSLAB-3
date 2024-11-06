#include <iostream>
using namespace std;

int main() {
    const int x = 3, y = 3, z = 3;  // Dimensions of the 3D arrays

    int array1[x][y][z];
    int array2[x][y][z];
    int product[x][y][z];

    // Input elements for the first 3D array
    cout << "Enter elements of the first 3D array (3x3x3):\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "Element [" << i << "][" << j << "][" << k << "]: ";
                cin >> array1[i][j][k];
            }
        }
    }

    // Input elements for the second 3D array
    cout << "Enter elements of the second 3D array (3x3x3):\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "Element [" << i << "][" << j << "][" << k << "]: ";
                cin >> array2[i][j][k];
            }
        }
    }

    // Perform element-wise multiplication
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                product[i][j][k] = array1[i][j][k] * array2[i][j][k];
            }
        }
    }

    // Display the resulting product array
    cout << "Result of element-wise multiplication of the two 3D arrays:\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "Element [" << i << "][" << j << "][" << k << "]: " << product[i][j][k] << endl;
            }
        }
    }

    return 0;
}
