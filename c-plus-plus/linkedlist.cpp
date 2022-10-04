#include <iostream>
using namespace std;
/*struct Node{
    int data;
    struct Node *next;
}*first=NULL; 
void create(int a[],int n){
    int i;
    struct Node *t,*last;
    first=new struct Node;
    first->data;
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=new struct Node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct Node *p){
    while(p!=NULL)
    {cout<<p->data;
    p=p->next;
        
    }
}
void rdisplay(struct Node *p){
    if(p!=NULL){
        cout<<p->data;
        rdisplay(p->next);
    }
}
int main()
{
    int a[5]={1,2,3,4,5};
    create(a,5);
    display(first);
    cout<<endl;
 rdisplay(first);
    return 0;
}
*/
struct Node {
    int data;
    Node *next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
};
void print(Node *head){
    Node *current=head;
    while(current!=NULL)
    {
    cout<<current->data<<" ";
  current=current->next;
    }
}
int main(){
    Node *head=new Node(10);
 head->next=new Node(20);
    head->next->next=new Node(30);
     head->next->next->next=new Node(40);
    print(head);
    return 0;
}

