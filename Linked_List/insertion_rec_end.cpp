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

Node* CreateLinkedList(int arr[],int index,int size){
    //Base Case
    if(index==size){
        return NULL;
    }
    Node *temp;
    temp = new Node(arr[index]);
    temp->next=   CreateLinkedList( arr, index+1, size);
    return temp;
}



int main() {
    Node *Head,*Tail;
    Tail= Head = NULL;

    int arr[6] = {3, 5, 4, 8, 9, 6};
     Head =  CreateLinkedList(arr, 0, 6);
   
    Node* temp = Head; // Initialize temp to the head of the linked list
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
