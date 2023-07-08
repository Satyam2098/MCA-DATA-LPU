#include <iostream>

using namespace std;

// Structure for a node
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning of the list
void insertAtBeginning(Node** head, int newData) {
    // Create a new node
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = *head;

    // Update the head to point to the new node
    *head = newNode;
}

// Function to display the linked list
void displayList(Node* head) {
    cout << "Linked List: ";
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;  // Initially, an empty list

    // Get the number of elements from the user
    int numElements;
    cout << "Enter the number of elements: ";
    cin >> numElements;

    // Insert elements at the beginning of the list
    for (int i = 0; i < numElements; i++) {
        int element;
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        insertAtBeginning(&head, element);
        displayList(head); // Display the list after each insertion
    }

    return 0;
}
