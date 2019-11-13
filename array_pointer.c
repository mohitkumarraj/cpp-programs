// array of pointers 
#include<stdio.h>
int main(){
	int i,n[4]={5,10,15,20};
    int *arr[4];  	
	int *pa[3];
	int a=5,b=10,c=15;
	pa[0]=&a;
	pa[1]=&b;
	pa[2]=&c;
	for(i=0;i<3;i++){
		printf("pa[%d] = %p\t",i,pa[i]);
		printf("*pa[%d] = %d\t",i,*pa[i]);
		printf("\n");
	}


printf("\n\n");
for(i=0;i<4;i++)
    arr[i]=&n[i];
for(i=0;i<4;i++){
	printf("arr[%d] = %p \t",i,arr[i]);
	printf("arr[%d] = %d \t",i,*arr[i]);
	printf("\n");
}

return 0;
	
}
