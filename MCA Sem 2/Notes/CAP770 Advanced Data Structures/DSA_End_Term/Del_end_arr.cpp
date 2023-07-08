#include <iostream>

using namespace std;

int main() {
    int arr[100];
    int size;

    // Get the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    // Get the elements of the array from the user
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Decrement the size of the array
    size--;

    // Print the updated array
    cout << "The updated array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
