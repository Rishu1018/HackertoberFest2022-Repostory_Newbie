#include<bits/stdc++.h>
using namespace std;

#define max_size 10

class Queue
{
    public:

    int rear,front;
    int * arr = new int[max_size];

    Queue()
    {
        rear = front = -1;
    }

    void enqueue(int data)
    {
        if(rear+1==max_size)
        {
            cout<<"Full queue"<<endl;
            return;
        }
        if(front==-1)
        {
            front++;
            rear++;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear]=data;
        }
    }

    void dequeue()
    {
        if(front==-1)
        {
            cout<<"Undeflow"<<endl;
            return;
        }
        else
        {
            front++;
        }
        if(front>rear)
        {
            front = rear = -1;
        }
    }
    int get_front()
    {
        return arr[front];
    }
    bool empty()
    {
        return rear==-1 and front==-1 ?true : false;
    }
    ~Queue()
    {
        delete [] arr;
    }
};


int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    while(!q.empty())
    {
        cout<<q.get_front()<<" --> ";
        q.dequeue();
    }
    cout<<"Empty"<<endl;
}
