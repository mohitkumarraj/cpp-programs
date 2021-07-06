#include<iostream>
using namespace std;



int main(){
int coin[]={2,3,5,10};

int W=15;

//int coin[]={1,5,10};
//
//int W=12;




int i,j;

int clength=sizeof(coin)/sizeof(coin[0]);	
cout<<"denomination of coin are = "<<clength<<"\n";	

int arr[clength][W+1];

for(i=0;i<clength;i++){
	arr[i][0]=1;
}




//first row
for(j=0;j<=W;j++){
	if(j%coin[0]==0){
		arr[0][j]=1;
	}else{
		arr[0][j]=0;
	}
}

for(int i=1;i<clength;i++){
	
	for(j=0;j<=W;j++){
		if(coin[i]>j){
			arr[i][j]=arr[i-1][j];
		}
		else{
			arr[i][j]=arr[i-1][j] + arr[i][j-coin[i]];	
		}
	}
}



for(i=0;i<clength;i++){
	for(j=0;j<=W;j++){
		cout<<arr[i][j]<<" ";
	}
cout<<"\n";
}

cout<<"Number of ways to get this value by using this coin = "<<arr[clength-1][W];
	
}
