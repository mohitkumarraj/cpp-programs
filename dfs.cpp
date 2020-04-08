#include<iostream>
#include<list>
using namespace std;

class Graph{
int V;
list<int> *adj;
void dfsutil(int v,bool visited[]);


public:
Graph(int V);	
void addEdge(int v,int w);
void Dfs(int v);	
};


Graph::Graph(int V){
  this->V = V;
  adj= new list<int>[V];
 }	


void Graph::addEdge(int v,int w){
adj[v].push_back(w);	
}


void Graph::Dfs(int v){
	
bool *visited=new bool[V];
for(int i=0;i<V;i++)
 visited[i]=false;	
 
 
dfsutil(v,visited);
}
void Graph::dfsutil(int v,bool visited[]){
	visited[v]=true;
	cout<<v <<" ";
	
  list<int>::iterator i;
  for(i=adj[v].begin();i!=adj[v].end();i++)
       if(!visited[*i])
	       dfsutil(*i,visited);	
} 


int main(){

int number, arr[10][10];
cout<<"Enter number of nodes in the Graph \n";
cin>>number;
cout<<"Enter Adjacency Matrix\n";
 for(int i=0;i<number;i++){
 	 cout<<"Enter "<<i+1<<" Row \n";
 	for(int j=0;j<number;j++)
 	   cin>>arr[i][j];
 }
 
 
 Graph obj(number);
 	
//enter adjancy matrix
for(int i=0;i<number;i++){
 	for(int j=0;j<number;j++)
 	   if(arr[i][j]==1)
 	      obj.addEdge(i,j);
 }
 
 
 cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n"; 
    obj.Dfs(2); 
  
 
 
return 0;	
}
