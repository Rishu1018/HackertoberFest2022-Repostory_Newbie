#include <iostream>
using namespace std;

class Node {
public:
    int Value;
    Node* Next;
};

void printList(Node*n) {
    while(n != NULL){
        cout<<n->Value<<endl;
        n = n->Next;
    }
}

void insert_start(Node**head, int value){
    
    Node*head_1 =new Node();
    head_1->Value = value;
    
    head_1->Next = *head;
    
    *head = head_1;
}

void insert_end(Node**head, int value){
    Node*end_end = new Node();
    end_end->Value = value;
    end_end-> Next = NULL;
    
    if(*head == NULL){
        *head = end_end;
        return;
    }
    
    Node* last = *head;
    
    while(last->Next != NULL){
        
        last = last ->Next;
        
    }
    
    last->Next = end_end;
    
}

void insert_middle(Node*previous, int newValue){
    if(previous == NULL){
        cout<<"Previous can not be NULL";
    }
    Node *newNode = new Node();
    
    newNode->Value = newValue;
    
    newNode->Next = previous->Next;
    
    previous->Next = newNode;
}


int main(){
    
    Node*head = new Node();
    Node*second = new Node();
    Node*third = new Node();
    
    head->Value = 1;
    head->Next =  second;
    
    second->Value = 2;
    second->Next = third;
    
    third->Value = 3;
    third->Next = NULL;

    insert_middle(head, -2);

    printList(head);
}
