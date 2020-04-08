#include<iostream>
#include<list>
#include<tuple>
#include<vector>

using namespace std;

int main(){
    int num,val,index;
    
	list<int>arr{11,22,26,27,32,35,46,50,55,55,58,60,65,70};
	
	do{
		cout<<"\npress 1 to enter value \n";
		cout<<"press 2 to pop value \n";
		cout<<"press 3 to know current capacity and size of  vector\n";
		cout<<"press 4 to know front and back element\n";
		cout<<"press 5 to Show vector\n";
		cout<<"Press 6 to Sort List \n ";
		cout<<"Press 7 to remove element by value\n";
		cout<<"Press 8 to reverse list \n";
		cout<<"press 0 to exit  \n";	
		
		cin>>num;
		switch(num){
			case 1:{ int ch;
				      cout<<"press 1 to push at front and 2 for push at back \n";
				      cin>>ch;
				      cout<<"Enter value\n";
				      
				      cin>>val;
				      if(ch==1){
				      	arr.push_front(val);
					  }else
					    arr.push_back(val);
				break;
			}
			case 2:{  
			  int ch;
				      cout<<"press 1 to pop from front and 2 for pop from back \n";
				      cin>>ch;
				      
					  if(ch==1){
				      	arr.pop_front();
					  }else
					    arr.pop_back();
				break;
			}
			
			case 3:{
				 cout<<"\nCurrent Size of vector is="<<arr.size();
				cout<<"\n\n";
				break;
			}
			
			
			
			
			case 4:{
				      cout<<"Front  value  is "<<arr.front();
				      cout<<"\nBack  value  is "<<arr.back();
				break;
			}
			case 5:{
			  
			  cout<<"List is = ";
			 
			 list<int>::iterator p=arr.begin();
			   
			   while(p!=arr.end()){
			   	cout<<*p<<" ";
			     p++;
			   }
			   
				break;
			}
			
            case 6:{
				  arr.sort();
				  cout<<"\nList has been sorted";
				break;
			}
			
			
			case 7:{
				cout<<"Enter the value to be remove \n";
				cin>>val;
				 arr.remove(val);
		
				cout<<val<<" Has been removed";
				break;
			}
			
			
			case 8:{
				  arr.reverse();
				  cout<<" Lisr Has been reversed";
				break;
			}
						
	       default:{
	       	 cout<<"Wrong choice\n";
			break;
		   }	
		}
			
	}while(num!=0);
return 0;	
}

