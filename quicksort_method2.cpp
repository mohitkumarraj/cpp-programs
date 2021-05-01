#include<iostream>
using namespace std;
//void swap(int *a, int *b){
//	*a=*a+*b;
//	*b=*a-*b;
//	*a=*a-*b;
//	
//}


void swap(int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}

int partition(int *arr,int start, int end){
	int pivot=arr[end];
	int partindex=start;
	
	for (int i=start;i<end;i++){
		 if(arr[i]<=pivot){
		 	swap(arr[i],arr[partindex]);
		 	partindex++;
		 }
	}
	
	swap(arr[partindex],arr[end]);
	return partindex;
	
}





void quicksort(int *arr, int start,int end){
	int index;
	if(start<end){
		int index=partition(arr,start,end);
		quicksort(arr,start,index-1);
		quicksort(arr,index+1,end);
	}
}

int main(){
	int arr[50];
int size,val;
cout<<"Enter the Size of array\n";
cin>>size;

cout<<"Enter the Array element in usorted manner\n" ;

for(int i =0 ;i<size;i++){
 cout<<"Enter "<<(i+1)<<" Element ";
 cin>>val;
 arr[i]=val;
 cout<<"\n";
}

quicksort(arr,0,size-1);
cout<<"Sorted array is =";
for(int i =0;i<size;i++){ 
 cout<<arr[i]<<" ";
}

return 0;
	
}
