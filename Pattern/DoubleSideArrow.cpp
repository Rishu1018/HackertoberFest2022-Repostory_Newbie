// PatternDoubleSidedArrow.cpp
//             1 
//         2 1   1 2 
//     3 2 1       1 2 3 
// 4 3 2 1           1 2 3 4 
//     3 2 1       1 2 3 
//         2 1   1 2 
//             1
#include<iostream>
using namespace std;

int main(){

	int N;
	cin>>N;

	if(N==1){
		cout<<"1";
		return 0;
	}

	int space1,current1,space2,current2;

	for(int k=1;k<=(2*N)-2;k++){
		cout<<" ";
	}

	cout<<"1"<<endl;	

	for(int i=2;i<=(N+1)/2;i++){							//For Spaces And Increasing Pattern

		for(space1=((2*N)-((4*i)-2));space1>0;space1--){
			cout<<" ";
		}

		for(current1=i;current1>=1;current1--){
			cout<<current1<<" ";
		}

		for(space2=0;space2<=((4*(i-1))-3);space2++){
			cout<<" ";
		}

		for(current2=1;current2<=i;current2++){
			cout<<current2<<" ";
		}

		cout<<endl;
	}

	int space3,current3,space4,current4;

	for(int j=N/2;j>=2;j--){

		for(space3=((2*N)-((4*j)-2));space3>0;space3--){
			cout<<" ";
		}

		for(current3=j;current3>=1;current3--){
			cout<<current3<<" ";
		}

		for(space4=0;space4<=((4*(j-1))-3);space4++){
			cout<<" ";
		}

		for(current4=1;current4<=j;current4++){
			cout<<current4<<" ";
		}

		cout<<endl;
	}

	for(int l=1;l<=(2*N)-2;l++){
		cout<<" ";
	}

	cout<<"1"<<endl;	

	return 0;
}










