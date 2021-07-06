#include<iostream>
using namespace std;


int fact(int n){
	
	int A[n];
	if(n<0){
		cout<<"-Ve number is not allowed";
		return 0;
	}
	A[0]=1;
	for(int i=1;i<=n;i++){
	  A[i]=A[i-1]*i;
	}
	return A[n];	
}


int main(){

int num;
cout<<"ENter the number =";
cin>>num;

cout<<"Factorial of number is ="<<fact(num);

	
}
