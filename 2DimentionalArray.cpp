#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input dimensions of the arrays
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int array1[rows][cols], array2[rows][cols], sum[rows][cols];

    // Input elements for the first array
    cout << "Enter elements of the first array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> array1[i][j];
        }
    }

    // Input elements for the second array
    cout << "Enter elements of the second array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> array2[i][j];
        }
    }

    // Adding the two arrays
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // Display the sum array
    cout << "Sum of the two arrays:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
