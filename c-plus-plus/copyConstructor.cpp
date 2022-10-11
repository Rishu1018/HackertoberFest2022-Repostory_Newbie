//      NOTE
    
// when no copy constructor is found, then Complier supplies its own copy constructor
// just like the case, when default constructor is provided


#include<iostream>
using namespace std;

class Number{
    private:
        int data;
    public:
        Number();
        Number(int num);
        Number(Number &obj);
        void display();
};

Number::Number(){
    data=0;
}

Number::Number(int num){
    data=num;
}

Number::Number(Number &obj){
    cout<<"\nCopy constructor called." <<endl;
    data=obj.data;
}

void Number::display(){
    cout<<"\n\nData for this object is: " <<data <<endl;
}


int main(){
    Number a, b(27), c;

    a.display();
    b.display();
    c.display();

    Number alpha(b), beta;        // Copy constructor is invoked
    alpha.display();

    beta=alpha;             // Copy constructor is not invoked, because beta's constructor is already called
    beta.display();

    Number gamma=b;         // Copy constructor is invoked
    gamma.display();

    return 0;
}