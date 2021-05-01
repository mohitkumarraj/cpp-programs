#include<iostream>
#include <cstdlib>
using namespace std;

class queue{
	public:
		int arr[50];
		int front,back;
		int size;
		queue(int si){
			size=si;
			front=0;
			back=-1;
		}
		
		
		void enqueue(int key){
			if(isFull()){
				cout<<"\nQueue is full";
				return ;
			}else{
				arr[++back]=key;
			 cout<<"Value inserted\n";
			}	
		}
		
		int dequeue(){
			int val;
			if(isEmpty()){
				cout<<"Queue is Empty";
				exit(EXIT_FAILURE);
			}else{
				val=arr[front];
				front++;
			}
		  return val; 
		}
		
		int peek(){
			if(isEmpty()){
				cout<<"Queue is Empty";
				exit(EXIT_FAILURE);
			}else return arr[front];
		}
		
		bool isEmpty(){
			if(back<front)
			   return true;
			else return false;
		}
		
		bool isFull(){
			if(back==size)
			  return true;
			else return false;  
		}
		
		
		void show(){
			for(int i=front;i<=back;i++)
			cout<<arr[i]<<"<-";
		}
};


int main(){



int size,choice,val;
cout<<"Enter the size of Queue";
cin>>size;

queue obj(size);
do{
	cout<<"\nPress 1 to perform Enqueue Operation\n";
	cout<<"Press 2 to perform Dequeue Operation\n";
	cout<<"Press 3 to perform Peek Operation\n";
	cout<<"Press 4 to show status if queue\n";
	cout<<"Press 0 to Exit\n";
	cout<<"Enter Your Choice\n";
	cin>>choice;
	
	
	switch(choice){
		
		case 1:{
			cout<<"Enter Value of node\n";
			cin>>val;
			obj.enqueue(val);
			break;
		}
		case 2:{
			cout<<"Dequeued Value is "<<obj.dequeue();
			break;
		}
		case 3:{
			cout<<"Peeked Value is "<<obj.peek();
			break;
		}
		
		case 4:{
			obj.show();
			break;
		}
	}
	
	
}while(choice!=0);






return 0;	
}
