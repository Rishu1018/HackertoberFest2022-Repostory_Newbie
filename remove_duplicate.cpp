#include<bits/stdc++.h>
using namespace std;

string duplicate(string s)
{
    if(s[0]=='\0')
    {
        return  "";
    }
        if(s[0]==s[1])
        {
            int index=1;
            while(index<s.size() && s[index]==s[0])
            index++;
           
           return s[0]+duplicate(s.substr(index));
        }
    
      return s[0]+duplicate(s.substr(1));
    }
 

int main()
{
char s[]="aabiiduudyu"; 
cout<<duplicate(s);
return 0;
}
