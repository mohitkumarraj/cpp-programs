#include<iostream>
using namespace std;

int max(int a,int b){
	if(a>b)
		return a;
	else return b;
}

int main(){
	int wt[]={3,4,5,6};
	int pr[]={2,3,4,1};
	int item[]={0,0,0,0};
	int n=4;// item 
	int w=8; // sack size 
	int arr[n+1][w+1];
	
	for(int i=0;i<=n;i++)
	 arr[i][0]=0;

    for(int j=0;j<=w;j++)
	 arr[0][j]=0;
 
    for(int i=1;i<=n;i++){
      for(int j=0;j<=w;j++){   
   	     
		  if(wt[i-1]>j){
   	      arr[i][j]= arr[i-1][j]; 	
		}else{			
		 arr[i][j]=max((pr[i-1]+ arr[i-1][j-wt[i-1]]), arr[i-1][j]); 
		}
   }	 	 	 	 
}
	 	 
// DP Table;
	 	 
	for(int i=0;i<=n;i++){
		for(int j=0;j<=w;j++){
			cout<<arr[i][j]<<" ";
		}
	cout<<"\n";
	}
	
// print table	



cout<<"The maximu profit can be =  "<<arr[n][w]	;
return 0;	
}
