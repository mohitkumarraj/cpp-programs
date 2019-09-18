// recursion 
#include<stdio.h>
unsigned fact(unsigned int); 
unsigned fact(unsigned int n){
	 if(n==0)
	 return 1;
	 else 
	    return n*fact(n-1);
			
}
int main(){
	int num;
	printf("Enter a number \n ");
	scanf("%d",&num);    
    printf("Factorial of number is =%d ",fact(num));
return 0;	
}
