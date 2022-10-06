#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int f(string s)
{
    int sum = 0;
    for(int i=0;i<s.size();i++)
    {
        sum+=s[i];
    }
    return sum%10;
}
class Node{
    public:
    string val;
    Node *next;
    Node(string data)
    {
        val = data;
        next = NULL;
    }
};
class hp{
    public:
    Node* arr[10]={NULL};
    int size = 10;
    void insert(string data)
    {
        // cout<<"INSIDE INSERT "<<endl;
        int index = f(data);
        // cout<<"DATA : "<<data<<" Index is : "<<index<<endl;
        Node *n = new Node(data);
        if(arr[index]==NULL)
        {
            arr[index]=n;
        }
        else
        {
            Node *rest = arr[index]->next;
            arr[index]->next=n;
            n->next=rest;
        }
    }
    void print()
    {
        for(int i=0;i<size;i++)
        {
            while(arr[i]!=NULL)
            {
                cout<<arr[i]->val<<" -> ";
                arr[i]=arr[i]->next;
            }
            cout<<" NULL "<<endl;
        }
    }
    void search(string data)
    {
        for(int i=0;i<size;i++)
        {
            while(arr[i]!=NULL)
            {
                if(arr[i]->val == data)
                {
                    cout<<" Data "<<arr[i]->val<<" is present at the index "<<i<<endl;
                    return;
                }
                arr[i]=arr[i]->next;
            }
        }
        cout<<"Invalid Data : ERROR 404 "<<data<<endl;
    }
    void del(string data)
    {
        Node*temp=arr[0];
        for(int i=0;i<size;i++)
        {
            while(temp!=NULL)
            {
                if(arr[i]->val==data)
                {
                    Node* temp = arr[i];
                    arr[i]=arr[i]->next;
                    delete temp;
                }
                arr[i]=arr[i]->next;
            }
        }
        cout<<"Invalid Data "<<endl;
    }
};
int main()
{
    hp m;
    m.insert("Mudit");
    m.insert("Pushkar");
    m.insert("Arvind Tripathi");
    m.insert("Rachana Tripathi");
    m.insert("rishu");
    m.insert("sankalp");
    m.insert("Rishit");
    m.insert("princeS");
    m.insert("PrinceK");
    m.insert("krishan");
    m.insert("nishant");
    m.insert("kartikaye");
    m.insert("rakshit");
    m.insert("mayank");
    m.insert("LUV");
    m.insert("Ram");
    m.insert("komal");
    m.insert("aditya");
    m.insert("kush");
    // m.search("Mudit");

    m.print();
}
