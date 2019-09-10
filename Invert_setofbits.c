#include<stdio.h>  //Invert a particukar set of bit 
void displaybit(int n);
void displaybit(int n){
	int i,mask;
	for(i=31;i>=0;i--){
	  mask=1<<i;
	  putchar(n&mask?'1':'0');
	
	}	
}

int main(){
int a,num,loc,mask=1,len,temp;
printf("Enter the number \n");
scanf("%d",&num);
printf("Binary form of number is  ");
displaybit(num);
printf("\nEnter the location from where you want to invert bits \n");
scanf("%d",&loc);
printf("Enter the length");
scanf("%d",&len);

while(loc!=0){
	mask=mask*2;
	loc--;	
}

printf("mask bit is ");
displaybit(mask);

while(len!=0){
	printf("\n");
	a=num&mask;
	
	if(a==0)
	num=num|mask;
    else{
	temp=mask;
	temp=~temp;
	num=num&temp;
    }
	
	mask=mask>>1;
	len--;
}


printf("\n");


printf("the locations has been Inverted \n");
displaybit(num);

return 0;

}




