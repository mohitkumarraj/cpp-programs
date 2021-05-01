#include<stdio.h>
#include<stdlib.h>

int binarySearch(int arr[],int size,int el){
	int low,mid,high;
	low=0;
	high=size-1;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==el){
			return mid;
		}
		
		if(arr[mid]<el){
			low=mid+1;
		}else{
			high=mid-1;
		}
		
	}
	
	return -1;
}

int main(){
	int arr[]={10,13,14,18,19,21,25,30,31,40,42,45,46,50,52,56};
	int element;
	int size=sizeof(arr)/sizeof(int);
	
	printf("Array is   ");
	for(int i=0;i<size;i++)
	   printf("%d ",arr[i]);
	
	
	
	printf("\nEnter the element to be search ");
	scanf("%d",&element);
	int num=binarySearch(arr,size,element);
	if(num==-1){
		printf("Number not in the list");
	}else{
		printf("Number found at position  %d",num+1);
	}
return 0;	
}

