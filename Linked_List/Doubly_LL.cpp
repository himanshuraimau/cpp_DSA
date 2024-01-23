#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int value){
        data = value;
        next = prev = NULL;
    }
};


int main(){
    // Insert at end....................
      Node *head = NULL;
      Node *tail = NULL;
      //Create Doubly Linked List

      
      int arr[] = {1,2,3,4,5};

      for(int i =0;i<5;i++){
        //Linked List Does not exist
        if(head==NULL){
            head = new Node(arr[i]);
            tail = head;
        }
        //It EXIST
        else{
                Node *temp = new Node(arr[i]);
                tail->next = temp;
                temp->prev = tail;
                tail = temp;

        }
      }

      Node *trav = head;
      while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
      }
}


//using recursion
#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int value){
        data = value;
        next = prev = NULL;
    }
};

Node *CreateDLL(int arr[],int index,int size,Node *back){
      if(index==size)
         return NULL;

          Node *temp = new Node(arr[index]);
          temp->prev = back;
          temp->next = CreateDLL(arr,index+1,size,temp);
          return temp;

}
int main(){
      Node *head = NULL;
   int arr[]={1,2,3,4,5};
      //Create Doubly Linked List
      head = CreateDLL(arr,0,5,NULL);

      Node *trav = head;
      while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
      }
}
