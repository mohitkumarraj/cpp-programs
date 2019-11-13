// pointer and two Dimensional array 
#include<stdio.h>
int main(){
int arr[3][4]={   {10,11,12,13},
                  {20,21,22,23},
                  {40,41,42,43}
};
int i,j;
for(i=0;i<3;i++){
	printf("Address of the %dth array = %x %x ",i,arr[i],*(arr+i));
    for(j=0;j<4;j++)
       printf("%d  %d ",arr[i][j],*(*(arr+i)+j));
       
	   printf("\n");
}
 return 0;
}
