// pointer to an array
#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int i,arr2[6]={5,10,25,62,15,56};
int *p=&arr;
printf("The size of array is =%d\n",sizeof(arr));
printf("the array is =%x\n",&arr); // pointer to the array , not to the single element; 
printf("pointer to the second element of the array is= %d\n",&arr[1]);

printf("\n\n\n second array arr2");

printf("\nsizeof second array is= %d ",sizeof(arr2));
printf("\n");
for(i=0;i<6;i++){
	printf("value of arr2[%d] = %d\t",i,*(arr2+i));
	printf("address of arr2[%d] = %d%x\n",i,(arr2+i));	
}

//different ways of printing the array element; 
i=0;
printf("\n\n\n\n\n\n\n");
for(i=0;i<6;i++){
	printf("value of arr2[%d]=",i);
	printf("%d\t",arr2[i]);
	printf("%d\t",*(arr2+i));
	printf("%d\t",*(i+arr2));
    printf("%d\t",i[arr2]);
	printf("Address of arr2[%d] = %x\n",i,&arr2[i]);		
}
return 0;
}
