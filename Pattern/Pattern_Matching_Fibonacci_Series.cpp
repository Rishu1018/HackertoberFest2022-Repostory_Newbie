#include <iostream>
using namespace std;

int main (){
  int n;
  cout<<"Enter the value of n : ";
  cin>>n;
  int a= 0;
  int b =1;
  cout << a<< " " << b << " ";
  for (int i=3; i<=n ; i++){
  int next_num = a+b;
  cout << next_num << " ";
  a=b;
  b= next_num;
  }
}
