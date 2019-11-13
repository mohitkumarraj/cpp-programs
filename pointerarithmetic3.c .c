#include<stdio.h>
int main(){
	int a =78;
	int *p;
	p=&a;
	printf("value of p =  address of a =  %x \n",p);
	printf("value of p = %x \n",++p);
	printf("value of p = %x \n",p++);
    printf("value of p = %x \n",p);
	printf("value of p =  %x\n",--p);
	printf("value of p = %x \n",p--);
	printf("value of p = %x \n",p);		
return 0;	
}
