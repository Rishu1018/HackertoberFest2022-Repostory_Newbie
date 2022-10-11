#include<iostream>
using namespace std;

class alpha{
    int real, imag;
    public:
        alpha(int a){
            real=a;
        }
        alpha(int a, int b){
            real=a;
            imag=b;
        }
        void display(){
            cout<<"\n\n>> " <<real <<" + " <<imag <<"i" <<endl;
        }
};

int main(){
    int x=10;
    alpha A=x;
    A=x;
    A.display();  

    return 0;
}