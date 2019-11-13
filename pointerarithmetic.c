#include<stdio.h>
int main(){
int num =54,*p1;
char ch='A',*p2;
float f1=45.55,*p3;
p1=&num;
p2=&ch;
p3=&f1;

printf("value store in p1= %x  and address of num1 =  %x ",p1,&num);
printf("\nvalue store in p2= %x  and address of ch =  %x ",p2,&ch);
printf("\nvalue store in p3= %x  and address of f1 =  %x ",p3,&f1);

p1++;
p2++;
p2++;
p3++;
printf("\nNow value of p1 is =  %x ",p1);
printf("\nNow value of p2 is =   %x ",p2);
printf("\nNow value of p3 is =   %x ",p3);

return 0;	
}
