#include<iostream>

using namespace std;
// class for node;
class node{
public:
    int info;
	node *next;	
		
 	node(){
 	    next=0;   // with no parameter
	 } 
    	node(int el,node *ptr=0){
		info=el;
		next=ptr;
    	}
};

class list{
	public:
	node *head,*tail;
	public:		
	list(){
		head=tail=0;
	}
	
   ~list(){
	 for(node *p;!isempty();){
		p=head->next;
		delete head;
		head=p;
 	 }
	}
	  
	int isempty(){
	return head==0;	
	}
   
   void addtohead(int el){
	head=new node(el,head);   			/////
	if(tail==0)
	  tail=head;	
   }
   
void reverse(){
  node *curr=head;
  node *pre=NULL,*ah=NULL;
  while(curr!=NULL){
   ah=curr->next;
   curr->next=pre;
   pre=curr;
   curr=ah;
  }   	
tail=head;
head=pre;
}
   
   
   void showlist(){
      for(node *temp=head;temp!=tail->next;temp=temp->next) //////
        cout<<temp->info<<" ";
  } 


  void add(list s2){
  list result;
  int sum=0;
  int carry=0;
  node *temp1=head,*temp2=s2.head;
  while(temp1!=tail->next && temp2!=s2.tail->next){
      sum=0;	
   sum=temp1->info+temp2->info+carry;
//  	cout<<sum<<" ";
  	if(sum<10)
  	   carry=0;
	else{
		carry=1;
		sum=sum%10;
	}	
	
	result.addtohead(sum);  
    temp1=temp1->next; temp2=temp2->next;
  }
  
  if(carry==1)
    result.addtohead(1);
    
    
cout<<"Sum of Number is ";
//  result.reverse();
  result.showlist();     
}
  
};

int main(){
	int num;
	int data;
	list stack1,stack2;
	
	cout<<"Enter First number of five digits , digit wise (L->R)\n";
	for(int i=0;i<5;i++){
		cin>>data;
		stack1.addtohead(data);
	}
	
//	stack1.reverse();

    cout<<"Enter Second number of five digits , digit wise(L->R)\n";
         	for(int i=0;i<5;i++){
		   cin>>data;
	    	stack2.addtohead(data);
	}	
//	stack2.reverse();
	do{
	cout<<"\n..........menu..........  \n";
	cout<<"press 1 to See status of first Stack\n";
	cout<<"press 2 to See status of Second Stack\n";
	
	cout<<"press 3 to Add Two numbers\n";
	cout<<"Press 0 to Exit\n";
	cin>>num;
	
	switch(num){
		case 1:{
			cout<<"ptr->";
			  stack1.showlist();
			break;
		}
		case 2:{
			cout<<"ptr->";
			stack2.showlist();
			break;
		}
		case 3:{
			stack1.add(stack2);
//			
			break;
		}
		
		
	}
	
	
	}while(num!=0);
	
	
return 0;	
}
