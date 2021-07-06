#include<iostream>
using namespace std;

int min(int a,int b){
	if(a<b)
	   return a;
	else
	return b;	
}

int main(){
int coin[]={1,5,6,9};
int w=11;

int clen=sizeof(coin)/sizeof(coin[0]);
int arr[clen][w+1];

for(int i=0;i<clen;i++)
   arr[i][0]=0;
//first row
for(int j=0;j<=w;j++)
	arr[0][j]=j;
	
	
for(int i=1;i<clen;i++){
	for(int j=0;j<=w;j++){
		if(coin[i]>j){
		 arr[i][j]=arr[i-1][j];	
		}else{
			arr[i][j]=min(arr[i-1][j],(1+arr[i][j-coin[i]]));
		}
	}
}

//print dynamic table;

for(int i=0;i<clen;i++){
	for(int j=0;j<=w;j++){
	cout<<arr[i][j]<<" ";
	}
      cout<<"\n";
}


// now what are the coins denomination 
int loop=arr[clen-1][w];
cout<<"Minimum number of coins will be = "<<loop;

int i=clen-1;
int j=w;
int size=loop;
int c[size];
int index=-1;

int amount=w;
while(loop!=0&&amount!=0){
	while(1){
		if(arr[i-1][j]!=arr[i][j])
		      break;
	  i--;	      
	}
	    
	c[++index]=coin[i];
	
  amount= j-coin[i];	
	j=j-coin[i];
	loop--;
}

cout<<"\ncoin Denomination are = ";
cout<<"(";
for(int k=0;k<size;k++)
  cout<<c[k]<<",";

cout<<")";
return 0;
}



