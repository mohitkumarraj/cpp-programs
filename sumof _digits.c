#include<stdio.h>
int main(){
int num,sum=0,i=1,rem;
printf("Enter a Number ");
scanf("%d",&num);
while(num>0){
       rem=num%10;
       printf("\n%d digit is =%d ",i,rem);
       sum=sum+rem;
       i++;
       num=num/10;
 }
printf("\nThe sum  of digits is %d",sum);	
	
	
return 0;	
}

