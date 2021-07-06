#include<iostream>
using namespace std;

//using resursion that takes O(2^n) time complexity  
static int count=0;
int fib(int n){
	count++;
   int sum=0;
   if(n<0){
   	cout<<"Negative Term not allowd";
   	  return 0;
   }
   
   if(n==0)
     return 0;
   if(n==1)
     return 1;
   sum=fib(n-1)+fib(n-2);
 
   return sum;
}

int main(){
	
int num;
cout<<"Enter the term of fibbo u  want "	;
cin>>num;

cout<<"The fibbo term is = "<<fib(num);
cout<<"\nTotal number of function call  are ="<<count;
		
}
