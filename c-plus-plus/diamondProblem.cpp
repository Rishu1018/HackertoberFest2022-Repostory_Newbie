#include<iostream>
using namespace std;

class base{
    protected:
        int val;
};
class derived1: virtual public base{
    public:                     // there will be 1 copy of var
        derived1(){
            val=1;
        }
};
class derived2: virtual public base{
    public:                     // there will be 1 copy of var
        derived2(){
            val=2;
        }
};

class derived3: public derived1, public derived2{
    public:                     // there will be 2 copy of var
        void getValue(){
            cout<<"\nVal: " <<derived1::val <<endl;
        }
};

int main(){
    derived3 obj;
    obj.getValue();

    return 0;
}