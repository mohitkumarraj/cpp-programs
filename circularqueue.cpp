#include<iostream>
using namespace std;



class queue{
        int arr[50];
		int front,back;
		int size,count;
       public: 
		queue(int si){
       	   count=0;
		   size=si;
		   front=0;
       	   back=-1;
	   }
	   
	   
	   
	   void enqueue(int key){
	   	if(isFull()){
				cout<<"\nQueue is full";
				return ;
			}else{
				back=(back+1)%size;
				arr[back]=key;
			 cout<<"Value inserted\n";
			 count++;
			}	
	   }
	   
	   void dequeue(){
		   if(isEmpty()){
	   		cout<<"\nQueue is Empty";
	   		return;
		   }else{
			   cout<<"\nDequeued value is  "<<arr[front];	
			   front=(front+1)%size;
			   count--;
		   }
	   }
	   
	   bool isFull(){
	   	 if(count==size)
	   	   return true;
	   	 else return false;
	   }
	   
	   bool isEmpty(){
	   	if(count==0)
	   	  return true;
	   	  else return false;
	   }
	   
	   void peek(){
	   	cout<<"Peeked Value is "<<arr[front];
	   }
	   void show(){
			for(int i=front;i<back;i++)
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
			obj.dequeue();
			break;
		}
		case 3:{
			obj.peek();
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
