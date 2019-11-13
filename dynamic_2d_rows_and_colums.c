// dynamic 2d array allocation rows and columns 	

#include<stdio.h>
int main(void){
int i,j,cols,rows;
int **a;
printf("Enter the number of rows  and columns\n");
scanf("%d %d",&rows,&cols);


a=(int **)malloc(rows*sizeof(int *)); // array pointer

for(i=0;i<rows;i++)
  a[i]=(int *)malloc(cols*sizeof(int));

for(i=0;i<rows;i++)
  for(j=0;j<cols;j++){
     printf("Enter value for a[%d][%d] :",i,j);
	 scanf("%d",&a[i][j]);	
  }
  
printf("The matrix is :\n");  

for(i=0;i<rows;i++){

  for(j=0;j<cols;j++)
     printf("%d ",a[i][j]);
	
	 printf("\n");	
  	
  }

  for(i=0;i<rows;i++)
       free(a[i]);
return 0;	
}
