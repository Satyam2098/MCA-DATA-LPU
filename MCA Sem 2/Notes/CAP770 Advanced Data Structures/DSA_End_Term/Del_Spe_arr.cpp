#include <iostream>

using namespace std;

int main() {
    int arr[100];
    int size, index;

    // Get the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    // Get the elements of the array from the user
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Get the index of the element to be deleted from the user
    cout << "Enter the index of the element to be deleted (0-based): ";
    cin >> index;

    // Shift all elements after the deleted one to the left
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
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
