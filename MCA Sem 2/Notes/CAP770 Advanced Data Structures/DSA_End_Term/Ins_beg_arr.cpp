#include <iostream>

using namespace std;

int main() {
    int arr[100];
    int size, new_element;

    // Get the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    // Get the elements of the array from the user
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Get the new element to insert at the beginning of the array
    cout << "Enter the element to insert at the beginning of the array: ";
    cin >> new_element;

    // Shift all the existing elements of the array one position to the right
    for (int i = size - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the beginning of the array
    arr[0] = new_element;

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
