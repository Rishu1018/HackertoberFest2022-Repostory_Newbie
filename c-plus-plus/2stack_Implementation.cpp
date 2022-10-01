#include<bits/stdc++.h>
using namespace std;
#define max_size 10;
class two_stack
{
    public:
    int top1;
    int top2;
    int * data = new int [max_size];
    two_stack()
    {
        top1 = -1;
        top2 = max_size+1;
    }
    void push1(int val)
    {
        if(top1<top2-1)
        {
            top++;
            data[top]=val;
        }
        else
        {
            cout<<"overflow"<<endl;
        }
    }
    void push2()
    void push2(int val)
    {

    }
};
int main()
{

}
