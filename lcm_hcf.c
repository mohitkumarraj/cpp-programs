// find LCM And HCF of NUMBER
#include<stdio.h>
int main(){
int num1,num2,i,hcf,lcm;
printf("Ente the two numbers \n");
scanf("%d" "%d",&num1,&num2);
for(i=1;i<=num1&&i<=num2;i++){
	
	if(num1%i==0&&num2%i==0){
		hcf=i;	
	}
	
}

printf("HCF of Numbers is =%d",hcf);
lcm=(num1*num2)/hcf;
printf("\nLCM of Numbers is =%d",lcm);
return 0;	
}
