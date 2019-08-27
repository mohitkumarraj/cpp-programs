//rhombus
#include<stdio.h>
int main(){ 
 int num,gap,i,j; 
 printf("Enter the size of rhombus\n");
 scanf("%d",&num);
 gap=num-1;
 for(i=0;i<num;i++){ // outsider loop 
   //first print space
   for(j=0;j<gap;j++)
       printf(" ");
       
   for(j=0;j<=2*i-1;j++)
       printf("*"); 
 	
 	
	 printf("\n");	
	 gap--;
 }
 
  
//dwonward 
gap=0;


for(i=num;i>0;i--){
	
	for(j=0;j<gap;j++)
	    printf(" ");
	
	for(j=0;j<2*i-1;j++)
	    printf("*");
	
	
	printf("\n");
	gap++;
	
	
  }


	
	
	
 return 0;
}
