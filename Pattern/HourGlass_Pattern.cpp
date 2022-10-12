// HourGlass.cpp
// 5 4 3 2 1 0 1 2 3 4 5
//   4 3 2 1 0 1 2 3 4 
//     3 2 1 0 1 2 3 
//       2 1 0 1 2 
//         1 0 1 
//           0 
//         1 0 1 
//       2 1 0 1 2 
//     3 2 1 0 1 2 3 
//   4 3 2 1 0 1 2 3 4 
// 5 4 3 2 1 0 1 2 3 4 5
#include<iostream>
using namespace std;

int  main(){
	int N;
	cin>>N;
	for(int i=N;i>=1;i--){
		for(int space=1;space<=(N-i);space++){
			cout<<"  ";
		}
		for(int cn=i;cn>=1;cn--){
			cout<<cn<<" ";
		}
		cout<<0<<" ";
		for(int cn=1;cn<=i;cn++){
			cout<<cn<<" ";
		}
		cout<<endl;
	}
	for(int spacemid=1;spacemid<=N;spacemid++){
		cout<<"  ";
	}
	cout<<0<<endl;

	for(int i=1;i<=N;i++){
		for(int space=1;space<=(N-i);space++){
			cout<<"  ";
		}
		for(int cn=i;cn>=1;cn--){
			cout<<cn<<" ";
		}
		cout<<0<<" ";
		for(int cn=1;cn<=i;cn++){
			cout<<cn<<" ";
		}
		cout<<endl;
	}
	return 0;
}