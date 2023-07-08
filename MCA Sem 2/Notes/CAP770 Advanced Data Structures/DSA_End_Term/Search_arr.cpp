#include <iostream>

using namespace std;

int main() {
    int arr[100];
    int size, element, index = -1;

    // Get the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    // Get the elements of the array from the user
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Get the element to be searched from the user
    cout << "Enter the element to be searched: ";
    cin >> element;

    // Search for the element in the array
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            index = i;
            break;
        }
    }

    // Print the result of the search
    if (index == -1) {
        cout << "The element was not found in the array." << endl;
    } else {
        cout << "The element was found at index " << index << " in the array." << endl;
    }

    return 0;
}
