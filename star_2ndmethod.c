#include<stdio.h>
int main(){
	int i,j,rows,n,k=0;
printf("Enter the number of rows\n");	
scanf("%d",&rows);	
n=(rows+1)/2;
	for(i=1;i<=rows;i++){
	i<=n?k++:k--;
		
		for(j=1;j<=rows;j++){
			if(j>=n+1-k&&j<=n-1+k){
			printf("*");
			}else 
			printf(" ");
		} 
	printf("\n");	
	}
	
	
return 0;	
}
