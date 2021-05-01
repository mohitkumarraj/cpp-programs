#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node *next, *pre;
	
		node(){
			data=0;
			next=pre=NULL;
		}
		
	    node(int value,node *n=0,node *p=0){
	    	data=value;
	    	next=n;
	    	pre=p;
		}
};

class dll{
	public:
	node *start,*end;
	dll(){
		start=end=NULL;
	}
	// functions ;
	
	void insertHead(int);
    void display();
	void insertTail(int);
	void insertBetween(int,int);
	bool checklist();	
	int search(int);
	void deleteStart();
	void deleteEnd();
    void deleteBetween(int);
    void reverseList();
};
	dll obj;

void dll::reverseList(){
	if(obj.start==NULL &&end==NULL){
		cout<<"\nCannot reverse list,list is Empty";
	  return;
	}else{
	
	   node *t1,*t2;
	   t1=obj.start;
	   t2=obj.start->next;
	   
	   while(t2!=NULL){
	   	t1->next=t1->pre;
	   	t1->pre=t2;
	   	t1=t2;
	   	t2=t2->next;
	   }
	   
	   
	   t1->next=t1->pre;
	   t1->pre=t2;
	   obj.end=obj.start;
	   obj.start=t1;
	   cout<<"\nList has beens Reversed as follow\n";
	   obj.display();
	   
	}
	
	
	
	
}
void dll::deleteEnd(){

	int x;
	if(obj.start==NULL &&end==NULL){
		cout<<"List is Empty";
	  return;
	}
	
	if(start==end){
		x=end->data;
		delete end;
		start=end=NULL;
	}else{
		node *temp=end;
		x=end->data;
		end=end->pre;
		end->next=NULL;
		delete temp;
}

cout<<"Deleted Value is "<<x;
}

void dll::deleteStart(){
	int x;
	if(obj.start==NULL){
		cout<<"List is Empty";
	 return;
	}
	if(start==end){
		x=start->data;
		delete start;
		start=end=NULL;
	}else{
		node *temp=start;
		x=start->data;
		start=start->next;
		start->pre=NULL;
		
		delete temp;
	}
	
	cout<<"Deleted Value is "<<x;
}
int dll::search(int key){
	int count=0;
	node *temp;
	
	if(obj.start==NULL)
	return -2;
	
    for(temp=start;temp!=end->next;temp=temp->next,count=count+1){
    	if(temp->data==key){
    		 break;
		}
	}
	if(temp==end->next ){
	return -1;
	}  
	else {
	 cout<<"\nValue found at postion number "<<count+1;
	}
}

void dll::deleteBetween(int key){
	node *temp;
	if(obj.start==NULL){
		cout<<"List is Empty";
	  return;
	}
	
	if(obj.search(key)==-1){
		cout<<"Value not found in the list";
	  return;
	}else{	
		if(start==end&&start->data==key){ // means single element
		  temp=start;
		  start=end=NULL;
		 delete temp; 
		 cout<<"Node Deleted Successfully";	
		}
		else if(start->data==key){
			obj.deleteStart();
		}else if(end->data==key){
			obj.deleteEnd();
		}else{
			
		   node *temp2=start->next;	
	       while(temp2!=end&&temp2->data!=key)
		     temp2=temp2->next;	
			 
			    
		  temp2->next->pre=temp2->pre;
		  temp2->pre->next=temp2->next;
		  delete temp2;
		  
		cout<<"Node Deleted Successfully";
		}
	}// end of else
		


}




//bool dll::checklist(){
//	if(obj.start==NULL&&obj.end==NULL)
//	return true;
//}



void dll::insertBetween(int key,int val){
                node *temp;
                node  *newnode=new node(val);
   
				if(obj.start==NULL){
					cout<<"list is Empty";
					return;
				}
				
				int status=obj.search(key);
				if(status==-1){
			    	cout<<"Value Not Found in the list ";
					return;
				}else{
     				   for(temp=obj.start;temp!=obj.end;temp=temp->next){
			    	    if(temp->data==key){
			    		 newnode->next=temp->next;
			    		 temp->next->pre=newnode;
			    		 newnode->pre=temp;
			    		 temp->next=newnode;
			             cout<<"\nValue inserted After "<<key;         
				        break;
					   }
			         }
						if(temp==obj.end){	
							obj.insertTail(val);
							cout<<"\nValue inserted After "<<key;	
						}
				}
				



}

void dll::insertHead(int val){
	start=new node(val,start);
	if(end==NULL)
	   end=start;
	 else
	 start->next->pre=start;
}




void dll::insertTail(int val){
   if(end!=NULL){
   	end=new node(val,0,end);
   	end->pre->next=end;
   	
   }else
    start=end=new node(val);		   
  

}

void dll::display(){
    if(obj.start==NULL|| obj.end==NULL){
    	cout<<"List Is  Empty";
	}else{
     	node *temp=start;
	while(temp!=end->next){
		cout<<temp->data<<" -> ";
		temp=temp->next;
	}
	}

}


int main(){
	
	int choice,val,val2;
	cout<<"Double Link List Operations\n";
 //returning point	
 
jump: do{
		cout<<"\n\nPress 1 to  insert at head\n";
        cout<<"Press 2 to  insert at tail\n";
		cout<<"Press 3 to  insert in between\n";        
		cout<<"Press 4 to  Search element \n";        
	    cout<<"Press 5 to delete Element from Start of the list\n";
	    cout<<"Press 6 to delete Element from End of the list\n";
        cout<<"Press 7 to delete Element in Between the list\n";		
		cout<<"Press 8 to reverse the List\n";
		cout<<"Press 9 to  Display DLL\n";

        cout<<"Press 0 to  EXIT\n";		
		cout<<"Enter your Choice  ";
		
		
		cin>>choice;
		
		switch(choice){
			case 1:{
				cout<<"Enter value of Node\n";
				cin>>val;
				obj.insertHead(val);
				break;
			}
			case 2 :{
				cout<<"Enter value of Node\n";
				cin>>val;
				obj.insertTail(val);
				break;
			}
            case 3 :{
            	cout<<"Enter value of Node After which you want to insert\n";
				cin>>val2;
				
				cout<<"\nEnter value of Node\n";
				cin>>val;				
				obj.insertBetween(val2,val);
				break;
			}			
            case 4 :{
				cout<<"Enter value of Node\n";
				cin>>val;
                
                int status=obj.search(val);
				if(status==-1){
                	cout<<"Value Not found in the list";
				}
				
				if(status==-2){
                	cout<<"list is Empty  First Add some Element into the list ";
				}
				
				break;
			}			
			case 5:{
			obj.deleteStart();
				break;
			}
			case 6:{
				obj.deleteEnd();
				break;
			}
			case 7:{
				cout<<"Enter Deleting ";
				cin>>val;
				obj.deleteBetween(val);	
				break;
			}	
			case 8:{
				obj.reverseList();
				break;
			}
			case 9:{
				obj.display();
				break;
			}
		}

	}while(choice!=0);
return 0;	
}
