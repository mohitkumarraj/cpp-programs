#include<stdio.h>// factorial 
int main(){
int fact=1,num;
printf("Enter a Number ");
scanf("%d",&num);
while(num>0){
fact=fact*num;
num--;
 }
printf("\nThe factorial  of number is %d",fact);	
	
	
return 0;	
}

