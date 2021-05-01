#include<stdio.h>
#include<stdlib.h>

void insert(int arr[],int size,int capacity,int el,int ind){		
		//insert by swaping
//	  int temp=arr[ind];
//	  arr[ind]=el;
//      arr[size-1]=temp;
//      
//insertion by maintaing order
      for(int i=size-1;i>=0;i--){
        arr[i]=arr[i-1];	
      	if(i==ind)
      	   break;
	  }
      arr[ind]=el;     
}





void Deletion(int arr[],int size,int del){
int i;
for(i=0;i<size;i++){
	if(arr[i]==del)
	   break;
}	

if(i<=size){
	
for(int j=i;j<size;j++){
arr[j]=arr[j+1];

}	

}



}




void show(int arra[],int size){
    int i;
    for ( i = 0; i < size; i++)
    {
        printf("%d ",arra[i]);
    } 
}


int main(){
int arr[100]={12,48,36,45,98,46,32,97,35,30};
int size=10;
int element,del;
int index;
show(arr,size);
printf("\nEnter the Element to be inserted  \n");
scanf("%d",&element);

printf("Enter the Index position \n");
scanf("%d",&index);
size=size+1;

insert(arr,size,100,element,index);
show(arr,size);


printf("\nEnter the Element to Delete \n");
scanf("%d",&del);
Deletion(arr,size,del);


size=size-1;
printf("Array after deletion\n");
show(arr,size);

}
