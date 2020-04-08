#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

 	 	
int partition(int*,int,int);
void quicksort(int*,int,int);

int partition(int *arr,int start,int end){
int pivot=arr[end];
int divideindex=start;

for(int i=start;i<end;i++){
	if(arr[i]<=pivot){
	swap(arr[i],arr[divideindex]);
	  divideindex++;
	}
}

swap(arr[divideindex],arr[end]);
return divideindex;	

}

void quicksort(int *arr,int start,int end){
	if(start<end){
		int index=partition(arr,start,end);
		quicksort(arr,start,index-1);
		quicksort(arr,index+1,end);
	}
}


int main(){

int arr[50],size;
cout<<"Enter size of array\n";
cin>>size;
cout<<"Enter Elements \n";
for(int i=0;i<size;i++)
    cin>>arr[i];
    
quicksort(arr,0,size-1);

//sorted array  
for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";	

return 0;	
}
