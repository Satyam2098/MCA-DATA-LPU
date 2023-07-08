#include <iostream>

using namespace std;

int main() {
    int arr[100];
    int size, new_element, position;

    // Get the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    // Get the elements of the array from the user
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Get the new element to insert and the position to insert it at
    cout << "Enter the element to insert: ";
    cin >> new_element;
    cout << "Enter the position to insert it at (starting from 0): ";
    cin >> position;

    // Shift all elements after the position to the right
    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the specified position
    arr[position] = new_element;

    // Increment the size of the array
    size++;

    // Print the updated array
    cout << "The updated array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
