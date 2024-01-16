#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {
    Node* Head;
    Head = NULL;

    int arr[6] = {3, 5, 4, 8, 9, 6};

    for (int i = 0; i < 6; i++) {
        // INSERT THE NODE AT BEGINNING
        if (Head == NULL) {
            Head = new Node(arr[i]);
        } else {
            Node* temp;
            temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }

    // Print the values

    Node* temp = Head; // Initialize temp to the head of the linked list
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
