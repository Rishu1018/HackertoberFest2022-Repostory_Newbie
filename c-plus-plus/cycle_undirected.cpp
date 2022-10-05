#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define ff first
#define ss second
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;
bool check(int s,int v,vector<int> &vis,vector<int> adj[])
{
    
    queue<pair<int,int>> q;
    vis[s]=1;
    q.push({s,-1});
     while(!q.empty())
     {
         auto node=q.front().first;
         auto par=q.front().second;
         q.pop();
         for(auto it: adj[node])
         {
             if(!vis[it])
             {
                 vis[it]=1;
                 q.push({it,node});

             }
             else if(par!=it)
             return true;
         }
     }
     return false;
}
bool iscycle(int v,vector<int> adj[])
{
    vector<int> vis(v+1,0);
  for(int i=1;i<=v;i++)
  {
      if(!vis[i])
      {
          if(check(i,v,vis,adj)) return true;
      }
  }
  return false;
} 
bool checkdfs(int node,int parent,vector<int> &vis,vector<int> adj[])
{
    vis[node]=1;
    for(auto it:adj[node])
    {  if(!vis[it])
    {
   if(checkdfs(it,node,vis,adj))
   return true;
    }
   else if(it!=parent)
   return true;
    }
    return false;
}
bool iscycledfs(int v,vector<int> adj[])
{
      vector<int> vis(v+1,0);
  for(int i=1;i<=v;i++)
  {
      if(!vis[i])
      {
          if(checkdfs(i,-1,vis,adj)) return true;
      }
  }
  return false;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int v,e;
cin>>v>>e;
vector<int> adj[v];
for(int i=0;i<e;i++)
{
    int a,b;
    cin>>a>>b;
    adj[a].pb(b);
    adj[b].pb(a);

}
if(iscycle(v,adj))
cout<<"yes\n";
else
cout<<"No\n";
return 0;
}