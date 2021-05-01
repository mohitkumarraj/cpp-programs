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

//a=a+b;
//b=a-b;
//a=a-b;
}




int partition(int *arr, int lb,int ub){
	int pivot=arr[lb];
	int down =lb;
	int up=ub;
	
	while(down<up){
	       while(arr[down]<=pivot&&down<up)
		       down++;
		   while(arr[up]>pivot&&down<=up)
		     up--;
			 	   	
    if(down<=up)
        swap(arr[down],arr[up]);
	}
	swap(arr[up],arr[lb]);
	return up;
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
