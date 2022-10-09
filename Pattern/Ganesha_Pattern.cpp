// GaneshaPattern
// *  ****
// *  *
// *  *
// *******
//    *  *
//    *  *
// ****  *
#include<iostream>
using namespace std;

int main(){

   int N;
   cin>>N;

   cout<<'*';                                   //2 line

   for(int space1=1;space1<=(N/2)-1;space1++){  //2 line   
      cout<<" ";
   }

   for(int star1=1;star1<=(N/2)+1;star1++){     //2 line
      cout<<'*';
   }

   cout<<endl;

   for(int i=2;i<=N/2;i++){                          //3,4 line

      cout<<'*';

      for(int space2=1;space2<=(N/2)-1;space2++){
         cout<<" ";
      }

      cout<<'*'<<endl;
   }

   for(int midrow=1;midrow<=N;midrow++){            // 5 Midrow  
      cout<<'*';
   }

   cout<<endl;

   for(int j=2;j<=N/2;j++){                        // 6,7 line

      for(int space1=1;space1<=N/2;space1++){
         cout<<" ";
      }

      cout<<'*';

      for(int space2=1;space2<=(N/2)-1;space2++){
         cout<<" ";
      }

      cout<<'*'<<endl;
   }

   for(int star1=1;star1<=(N/2)+1;star1++){       // 8-lastline 
      cout<<'*';
   }

   for(int space1=1;space1<=(N/2)-1;space1++){
      cout<<" ";
   }

   cout<<'*';

   cout<<endl;

   return 0;
}


