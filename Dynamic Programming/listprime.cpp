#include<iostream>
#include<math.h>
using namespace std;


int main(){
int num;
int count;	
cout<<"Enter the number = ";
cin>>num;

for(int i=2;i<=num;i++){

	count=0;
	for(int k=1;k<=i;k++){
		if(i%k==0){
			count++;
		}
	}
	if(count==2){
		cout<<i<<" ";
	}
}
return 0;
}
