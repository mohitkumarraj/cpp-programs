//pointer to an array 2nd 
#include<stdio.h>
int main(){
int i,arr[6]={10,20,25,62,65,56};
int *p;
p=arr;
for(i=0;i<6;i++){
printf("Address of arr[%d] = %x  %x  %x  %x\n",i,&arr[i],arr+i,p+i,&p[i]);	
}
printf("\n\n\n\n");
for(i=0;i<6;i++){
printf("Value of arr[%d] = %d  %d  %d  %d\n",i,arr[i],*(arr+i),*(p+i),*(&p[i]));	
}



return 0;	
}
