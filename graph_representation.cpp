#include<iostream>
#include<vector>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}


void printGraph(vector<int> adj[],int V){
	
	for(int v=0;v<V;v++){
		
	  cout<<"Adjacency list of vertex "<<v<<" \n head";	
	    
		for(int i=0;i<adj[v].size();i++)
			  cout<<"->"<<adj[v].at(i);
	
		//for(int x:adj[v])
	      //cout<<"->"<<x;
	
	     cout<<"\n"; 
	}


}
int main(){
	
	int node,arr[10][10];
	
	cout<<"Enter number of nodes \n";
	cin>>node;
	cout<<"Enter Adjacency matrix\n";

	for(int i=0;i<node;i++){
		  cout<<"Enter "<<i+1<<" Row\n";
		for(int j=0;j<node;j++)   
		  cin>>arr[i][j];
	}
	
// adding edge 
	
	vector<int> adj[node];
	
	for(int i=0;i<node;i++){
		
		for(int j=0;j<i;j++){
			if(arr[i][j]==1)
			addEdge(adj, i, j);
		}   
	}
	
	
	printGraph(adj, node);

	
	
	/*
	
	 int V = 5; 
    vector<int> adj[V]; 
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    printGraph(adj, V);
*/
return 0;
	
}
