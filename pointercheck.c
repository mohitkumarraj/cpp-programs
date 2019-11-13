// checking pointer 
#include<stdio.h>
int main(){
int *ptr, num=54;
ptr=&num; 	

printf("the address  of num = value of ptr is %x   %x ",ptr ,&num);
printf("\nthe value of num = value pointed by ptr is %d     %d ",*(&num),*ptr);
printf("\nthe address of ptr is %x ",&ptr);
printf("\nthe size of ptr is %d ",sizeof(ptr));
//pointer increament 

return 0;	
}
