
#include<stdio.h>  //check a particukar bit 
void displaybit(int n);
void displaybit(int n){
	int i,mask;
	for(i=31;i>=0;i--){
	  mask=1<<i;
	  putchar(n&mask?'1':'0');
	
	}	
}

int main(){
int a,num,loc,mask=1;
printf("Enter the number \n");
scanf("%d",&num);
printf("Binary form of number is  ");
displaybit(num);
printf("\nEnter the location you want Invert \n");
scanf("%d",&loc);

while(loc!=0){
	mask=mask*2;
	loc--;	
}

printf("mask bit is ");
displaybit(mask);
printf("\n");

a=num&mask;


if(a==0)
	num=num|mask;
else{
	mask=~mask;
	num=num&mask;
}
   
printf("After Inversion  ");

displaybit(num);
return 0;

}




