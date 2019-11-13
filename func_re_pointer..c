// function returning pointer 

#include<stdio.h>
int *fun(int *p,int n);
int main(void){
	int n=5,arr[5]={1,2,3,4,5};
	int *ptr;
	ptr=fun(arr,n);
printf("Value of arr = %p, Value of Ptr =%p , value of *ptr = %d \n	",arr,ptr,*ptr);	
return 0;
}


int *fun(int *p,int n){
	p+=n;
	return p;
}
