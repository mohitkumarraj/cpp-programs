
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
int num,loc,mask=1,i,count1=0,count0=0;
printf("Enter the number \n");
scanf("%d",&num);
printf("Binary form of number is  ");
displaybit(num);

printf("\n");

for(i=31;i>=0;i--){
	mask=1<<i;
	loc=num&mask;
	if(loc!=0)
	  count1++;
	  else count0++;
	
}


printf("Number of Ones are =%d",count1);
printf("\nNumber of Zeros are =%d",count0);
return 0;

}




