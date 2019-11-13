//passing array to the function 
#include<stdio.h>
void  func(double d[],int *i ,char c[]);

int main(){
double d_arr[5]={1.4,1.5,2.5,6.78,6.5};	
int i_arr[5]={1,2,3,4,5};
char c_arr[50]={'a','b','c','d','e'};
printf("indise main();");


printf("Sizeof(d_arr)= %u\t",sizeof(d_arr));	
printf("Sizeof(i_arr)= %u\t",sizeof(i_arr));
printf("Sizeof(c_arr)= %u\t",sizeof(c_arr));	
printf(" %p  %p  %p \n ",d_arr,i_arr,c_arr);
func(d_arr,i_arr,c_arr);

return 0;
}
void func(double d[],int *i ,char c[]){ // pointer to the array of th
  printf("inside function ");
  printf("sizeof(d)= %u\t",sizeof(d));	
  printf("sizeof(i)= %u\t",sizeof(i));
  printf("sizeof(c)= %u\t",sizeof(c));
  printf("%p  %p  %p \n",d,i,c);	
}
