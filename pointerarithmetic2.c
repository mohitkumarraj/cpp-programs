#include<stdio.h>
int main(){
int num = 43,*ptr;
ptr =&num;

printf("address of num is = %x",ptr);
printf("\nvalue of num is  = %d",*ptr);
(*ptr)++; // value post increament 
printf("\n value post increament = %d",*ptr);
printf("\n value pre increament = %d",++*ptr); // value pre increament 
printf("\naddress pre decreament =%d",*--ptr);
return 0;
}
