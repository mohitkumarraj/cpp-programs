#include<iostream>
using namespace std;

//using DP using memoization array to store the result of the calculated subproblems 
int memo[50];

int fib(int n){   
   if(memo[n]!=NULL)
     return memo[n];
   if(n<0){
   	cout<<"Negative Term not allowd";
   	  return 0;
   }
   if(n==0)
     return 0;
   if(n==1)
     return 1;
   int sum=0;
   sum=fib(n-1)+fib(n-2);
   memo[n]=sum;
   return sum;
}

int main(){	
int num;
cout<<"Enter the term of fibbo u  want "	;
cin>>num;
cout<<"The fibbo term is = "<<fib(num);

		
}
