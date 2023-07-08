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

    // Get the new element to insert at the end of the array
    cout << "Enter the element to insert at the end of the array: ";
    cin >> new_element;

    // Insert the new element at the end of the array
    arr[size] = new_element;

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
