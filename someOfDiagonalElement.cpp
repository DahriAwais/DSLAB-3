#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the dimension of the square matrix
    cout << "Enter the dimension of the matrix (n x n): ";
    cin >> n;

    int matrix[n][n];

    // Input elements for the matrix
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;

    // Calculate sum of primary and secondary diagonals
    for (int i = 0; i < n; ++i) {
        primaryDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][n - i - 1];
    }

    cout << "Sum of primary diagonal elements: " << primaryDiagonalSum << endl;
    cout << "Sum of secondary diagonal elements: " << secondaryDiagonalSum << endl;

    return 0;
}
