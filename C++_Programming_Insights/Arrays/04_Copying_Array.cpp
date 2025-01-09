#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int newly[size(arr)] = {};

    // Display the original array
    cout << "\nOriginal Array: ";
    for (auto temp : arr) {
        cout << temp << " ";
    }

    // Copying data from arr to newly
    for (int i = 0; i < size(arr); i++) {
        newly[i] = arr[i];
    }

    // Display the newly copied array
    cout << "\nNewly Array: ";
    for (int temp : newly) {
        cout << temp << " ";
    }

    cout << endl;
    return 0;
}
