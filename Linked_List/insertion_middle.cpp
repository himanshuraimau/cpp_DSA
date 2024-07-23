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
    Node *Head,*Tail;
    Tail= Head = NULL;

    int arr[6] = {3, 5, 4, 8, 9, 6};
     // INSERT THE NODE AT Particular Position
     

    for (int i = 0; i < 6; i++) {
        
        if (Head == NULL) {
            Head = new Node(arr[i]);
            Tail = Head;
        } else {
            Tail->next = new Node(arr[i]);
            Tail =  Tail->next;
        }
    }

    int x = 3; //Insertion Position
    int value = 30;
    Node *tm = Head;
    x--;
    while(x--){
        tm = tm->next;
    };
    Node *temp2 = new Node(value);
    temp2->next = tm->next;
    tm->next = temp2;



    // Print the values

    Node* temp = Head; // Initialize temp to the head of the linked list
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
