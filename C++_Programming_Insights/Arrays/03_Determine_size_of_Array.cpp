#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4};

    // Method 1: Range-based for loop
    cout << "Method 1:" << endl;
    for (int value : numbers) {
        cout << value << endl;
    }

    // Method 2: Traditional for loop with sizeof
    cout << "\nMethod 2:" << endl;
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) {
        cout << numbers[i] << endl;
    }

    // Method 3: Modern for loop using std::size
    cout << "\nMethod 3:" << endl;
    for (int i = 0; i < size(numbers); i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}

/*
Details:
1. Method 1 (Range-based for loop):
   - Simple and easy to read.
   - Best when you only need to access array elements sequentially.

2. Method 2 (Traditional for loop with sizeof):
   - Calculates array size using sizeof.
   - Useful in pre-C++17 environments.

3. Method 3 (Modern for loop with std::size):
   - Utilizes std::size for cleaner and safer array size calculation.
   - Recommended for modern C++ (C++17 and later).
*/
