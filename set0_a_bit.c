
#include<stdio.h>  //set zero a particukar bit 
void displaybit(int n);
void displaybit(int n){
	int i,mask;
	for(i=31;i>=0;i--){
	  mask=1<<i;
	  putchar(n&mask?'1':'0');
	
	}	
}

int main(){
int num,loc,mask=1;
printf("Enter the number \n");
scanf("%d",&num);
printf("Binary form of number is  ");
displaybit(num);
printf("\nEnter the location you want to set zero \n");
scanf("%d",&loc);

while(loc!=0){
	mask=mask*2;
	loc--;	
}

printf("mask bit is ");
mask=~mask;
displaybit(mask);
printf("\n");

num=num&mask;

printf("the location has been set to zero \n");
displaybit(num);

return 0;

}




