#include<iostream>
using namespace std;

//  fibbo using Dp botton-up approach
int fibbo(int n){
	int A[n];
	
	A[0]=0;A[1]=1;
	for(int i=2;i<=n;i++){
    A[i]=A[i-1]+A[i-2];	
	}
  return A[n];
}


int main(){
int num;
cout<<"Enter the term of Fibbo that u want =";
cin>>num;
cout<<"The term of fibbo is= "<<fibbo(num);
return 0;	
}
