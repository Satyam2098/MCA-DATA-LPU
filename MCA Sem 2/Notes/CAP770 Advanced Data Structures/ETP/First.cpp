#include <iostream>
#include <vector>

using namespace std;

// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to heapify a subtree rooted at 'root' index
void heapify(vector<int>& arr, int size, int root) {
    int largest = root;     // Assume the root as the largest element
    int left = 2 * root + 1;    // Index of the left child
    int right = 2 * root + 2;   // Index of the right child

    // If the left child is larger than the root
    if (left < size && arr[left] > arr[largest])
        largest = left;

    // If the right child is larger than the largest so far
    if (right < size && arr[right] > arr[largest])
        largest = right;

    // If the largest is not the root, swap and heapify the affected subtree
    if (largest != root) {
        swap(arr[root], arr[largest]);
        heapify(arr, size, largest);
    }
}

// Heap Sort function
void heapSort(vector<int>& arr) {
    int size = arr.size();

    // Build max heap (rearrange the array)
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(arr, size, i);

    // Extract elements one by one from the heap
    for (int i = size - 1; i > 0; i--) {
        // Move the current root (maximum value) to the end
        swap(arr[0], arr[i]);

        // Call heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int main() {
    vector<int> numbers;

    // Take input from the user
    cout << "Enter ten numbers:\n";
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    // Build a max heap
    heapSort(numbers);

    // Display the sorted numbers
    cout << "Sorted numbers: ";
    for (int num : numbers)
        cout << num << " ";
    cout << endl;

    return 0;
}
