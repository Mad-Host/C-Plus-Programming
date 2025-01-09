#include <iostream>
using namespace std;

int main() {
    // Step 1: Declaring and initializing a 2D array
    const int rows = 3;
    const int cols = 4;
    int matrix[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Step 2: Accessing elements and printing the 2D array
    cout << "Matrix Elements:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Step 3: Real-world usage - Transpose of the matrix
    int transpose[cols][rows]; // Transposed matrix

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "\nTransposed Matrix:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    // Step 4: Dynamic multi-dimensional arrays (using pointers)
    cout << "\nDynamic 2D Array:" << endl;
    int** dynamicArray = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        dynamicArray[i] = new int[cols];
    }

    // Initializing dynamic array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            dynamicArray[i][j] = i * cols + j + 1; // Filling with values
            cout << dynamicArray[i][j] << " ";
        }
        cout << endl;
    }

    // Cleaning up dynamic memory
    for (int i = 0; i < rows; ++i) {
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;

    return 0;
}
