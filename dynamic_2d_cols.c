// dynamic 2d array allocation columns 	

#include<stdio.h>
int main(){
int i,j,cols;
int *a[3];
printf("Enter the number of rows \n");
scanf("%d",&cols);


for(i=0;i<3;i++)
  a[i]=(int *)malloc(cols*sizeof(int));


for(i=0;i<3;i++)
  for(j=0;j<cols;j++){
     printf("Enter value for a[%d][%d] :",i,j);
	 scanf("%d",&a[i][j]);	
  }
  
printf("The matrix is :\n");  

for(i=0;i<3;i++){

  for(j=0;j<cols;j++)
     printf("%d ",a[i][j]);
	
	 printf("\n");	
  	
  }

  for(i=0;i<3;i++)
       free(a[i]);
return 0;	
}
