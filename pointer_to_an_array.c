// pointer to whole array instead of an element 
#include<stdio.h>
int main(){
int *p;
int arr[5]={3,5,7,9,11};	
int (*ptr)[5];	
p=arr;
ptr=&arr;

printf("p = %p ,ptr = %p \n",p,ptr);
p++; // increment by 4 byte 
ptr++; // increament by 20 bytes 
printf("p = %p ,ptr = %p \n",p,ptr);


p--;
ptr--;
printf("\n\n\n\n");

printf("p = %p ,ptr = %p\n",p,ptr);
printf("*p = %d , *ptr =  %p \n",*p,*ptr);
printf("Sizeof(p) = %u , sizeof(*p) = %u \n",sizeof(p),sizeof(*p));
printf("Sizeof(ptr) = %u , sizeof(*ptr) = %u \n",sizeof(ptr),sizeof(*ptr));

return 0;	
}
