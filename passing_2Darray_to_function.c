// passing 2D array to the function 
#include<stdio.h>
void func(int(*a)[4]);

int main(){
	int i,j,arr[3][4]={   {10,11,12,13},
                          {20,21,22,23},
                          {40,41,42,43}
};
printf("Inside main():sizeof(arr) = %u\n",sizeof(arr));
func(arr);
printf("Content of the array after calling func() are: \n");
// only print the updated array	
for(i=0;i<3;i++){
	for(j=0;j<4;j++)
		printf("%d ",arr[i][j]);
		printf("\n");
} 


return 0;	
}


void func(int (*a)[4]){
int i,j;
printf("Inside func :Sizeof(a) = %u\n",sizeof(a));	
printf("Inside func :Sizeof(*a) = %u\n",sizeof(*a));
for(i=0;i<3;i++){
	for(j=0;j<4;j++)
		a[i][j]=a[i][j]+2;
} 


}


