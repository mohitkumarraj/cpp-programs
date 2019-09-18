//fibbo using recurion 
#include<stdio.h>
int fibo(int n){
	if(n==0)
	 return 0;
	else if(n==1)
	 return 1 ;
	else return (fibo(n-1)+fibo(n-2)); 
}


int main(){
int num,i;
printf("Enter the number u want in your fibbo. series ");
scanf("%d",&num);

for(i=0;i<num;i++){
	printf("%d ", fibo(i));
}
return 0;	
}
