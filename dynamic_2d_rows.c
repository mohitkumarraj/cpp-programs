// dynamic 2d array allocation rows  	
#include<stdio.h>
int main(){
int i,j,rows;
int(*a)[4];
printf("Enter the number of rows \n");
scanf("%d",&rows);

a=(int(*)[4])malloc(rows*4*sizeof(int));
for(i=0;i<rows;i++)
  for(j=0;j<4;j++){
     printf("Enter a[%d][%d] :",i,j);
	 scanf("%d",&a[i][j]);	
  }
  
printf("The matrix is :\n");  

for(i=0;i<rows;i++){

  for(j=0;j<4;j++)
     printf("%d ",a[i][j]);
	
	 printf("\n");	
  	
  }
  
return 0;	
}
