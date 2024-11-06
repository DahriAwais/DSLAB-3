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

    // Display the primary diagonal elements
    cout << "Primary diagonal elements: ";
    for (int i = 0; i < n; ++i) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    // Display the secondary diagonal elements
    cout << "Secondary diagonal elements: ";
    for (int i = 0; i < n; ++i) {
        cout << matrix[i][n - i - 1] << " ";
    }
    cout << endl;

    return 0;
}
