#include<bits/stdc++.h>
using namespace std;

struct node {
    int u;
    int v;
    int wt; 
    node(int first, int second, int weight) {
        u = first;
        v = second;
        wt = weight;
    }
};

int main(){

    int V=6,E=7;
    vector<node> edges; 
	edges.push_back(node(0,1,5));
	edges.push_back(node(1,2,-2));
	edges.push_back(node(1,5,-3));
	edges.push_back(node(2,4,3));
	edges.push_back(node(3,2,6));
	edges.push_back(node(3,4,-2));
	edges.push_back(node(5,3,1));
    int src=0;                   //Source Vertex
    int inf = 10000000;          //Alternative to INT_MAX
    vector<int> dist(V, inf); 
    dist[src] = 0; 

    for(int i = 1;i<=V-1;i++) {                            //Exact V-1 iterations of the Algo
        for(auto it: edges) {
            if(dist[it.u] + it.wt < dist[it.v]) {
                dist[it.v] = dist[it.u] + it.wt; 
            }
        }
    }

    int fl = 0; 
    for(auto it: edges) {
        if(dist[it.u] + it.wt < dist[it.v]) {     // To check if, even after V-1 iterations if we can still minimise distance
            cout << -1;                           //then it simply means that a negative cycle is present
            fl = 1;                                 
            break; 
        }
    }
    
    if(!fl) {                             //IN case fl==0, printing the distances 
        for(int i = 0;i<V;i++) {
            cout << dist[i]<<" ";
        }
    }
    return 0;
}

//Time Complexity == O(V.E)
