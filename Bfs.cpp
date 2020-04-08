#include<iostream>
#include<list>
using namespace std;
class Graph{
int V;

list<int> *adj;

public:
Graph(int V);
void addEdge(int v,int w);
void Bfs(int s);	
};


Graph::Graph(int V){
	this->V=V;
	adj=new list<int>[V];
}


void Graph::addEdge(int v,int w){
adj[v].push_back(w);	

}


void Graph::Bfs(int s){
	
bool *visited= new bool[V];
for(int i=0;i<V;i++)
visited[i]=false;

list<int>queue;

visited[s]=true;
queue.push_back(s);
// iterator that point to the blo of array
list<int>::iterator i;
while(!queue.empty()){
s=queue.front();
cout<<s<<" ";
queue.pop_front();	
	
for(i=adj[s].begin();i!=adj[s].end();i++){
    if(!visited[*i]){
    	visited[*i]=true;
    	queue.push_back(*i);
	}	
	
}	


}

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
 
 
//
cout<<"Here is the Bfs of Graph starting from 2\n";
 obj.Bfs(2);
 
return 0;	
}
