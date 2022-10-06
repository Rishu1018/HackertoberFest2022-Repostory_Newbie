#include<bits/stdc++.h>
using namespace std;

class node 
{
    public:
    int data;
    node * next;
    node()
    {
        next = NULL;
    }
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Queue
{
    public:
    node * head;
    node * tail;

    Queue()
    {
        head = NULL;
        tail = NULL;
    }

    void enqueue(int data)
    {
        node * x = new node(data);
        if(!head)
        {
            head = tail = x;
        }
        
        tail->next = x;
        tail = tail->next;
    }
    void dequeue()
    {
        if(!head)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        node * to_delete = head ;
        head = head->next;
        if(!head)
        {
            tail = NULL;
        }
        delete to_delete;
    }
    bool empty()
    {
        return head==NULL;
    }
    int get_front()
    {
        if(head)return head->data;
        return -1;
    }
    
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    cout<<q.get_front()<<endl;
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.dequeue();
    cout<<q.get_front()<<endl;
    q.enqueue(70);
    while(!q.empty())
    {
        cout<<q.get_front()<<" --> ";
        q.dequeue();
    }
    return 0;
}
