
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
int num,loc,mask=1;
printf("Enter the number \n");
scanf("%d",&num);
printf("Binary form of number is  ");
displaybit(num);

printf("\n");
num=num&mask;
if(num==0)
   printf("Number is Even");
   else printf("Number is Odd");
return 0;

}




