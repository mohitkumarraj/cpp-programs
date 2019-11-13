#include<stdio.h>
#include<stdlib.h>

void insertnode();
void insert_at_head();
void delete_node_from_head();
void delete_node_from_tail();
void delete_node_by_value();
void insert_by_value();
int count();
void search();
void display();




typedef struct singlell{
	int data;
	struct singlell *next;
}node;

node *head=0,*tail=0,*temp=0;
int value;



int main(){
int choice;	
	
do{
printf("\n\\\\\\\\\\\\\\\\menu\\\\ driven \\\\\\\\\\\\\\\\\\\\n\n");
printf("press 1 to insert node in link list\n");
printf("press 2 to insert node in link at head\n");
printf("press 3 to delete node from headn\n");
printf("press 4 to delete node from tail\n");	
printf("press 5 to delete node in link list by value \n");
printf("press 6 to insert node in link list  after a particular value\n");
printf("press 7 to count number of node in the list \n");
printf("press 8 to find the position of node in the list \n");
printf("press 9 to display the list\n");
printf("press 0 to exit \n");
scanf("%d",&choice);
	
switch(choice){
	case 1:{  insertnode();
		break;
	}
	case 2:{
		insert_at_head();
		break;
	}
	case 3:{ delete_node_from_head();
		break;
	}
	case 4:{delete_node_from_tail();
		
		break; 
	}
    case 5:{  delete_node_by_value();
		break;
	}
    case 6:{
    	insert_by_value();
		break;
	}
	case 7:{
          printf("The number of nodese in  the list is =  %d",count());
		  printf("\n\n");	
		break;
	}
    case 8:{ 
        search();
		break;
	}
	case 9:{
		display();
		break;
	}
	
	
	
}


}while(choice!=0);	
 return 0;	
}



void insertnode(){
	printf("Enter the node value \n");
	scanf("%d",&value);
	temp= (node *)malloc(sizeof(node));
	temp->data=value;
	
	if(head==NULL&& tail==NULL){
	   head=tail=temp;
	   }
	   else{tail->next=temp;
		      tail=tail->next; 
	    }
	tail->next=NULL;   
}


//display
 void display(){
    if(head == NULL){
        printf("List is empty.");
     }
      else{
          node *p = head;
           printf("List is =\t");
		   while(p!= NULL){
			  printf("%d\t",p->data); //print current data
                p = p->next;                 // point to next node 
           }
       }
 	printf("\n\n\n");
 }

void insert_at_head(){
	printf("Enter the node value \n");
	scanf("%d",&value);
	temp= (node *)malloc(sizeof(node));
	temp->data=value;

	if(head==NULL&& tail==NULL){
	   head=tail=temp;tail->next=NULL;
	   }
	   else{temp->next=head;
	   head=temp;}   
}

void delete_node_from_head(){
if(head==NULL){
printf("List is empty\n"); 
}
else if(head==tail&&head!=NULL){ head=tail=NULL; printf("Node deleted successfully");   //single node
} 

else{                                                           //if(head!=NULL)
head=head->next; printf("Node deleted successfully");	
} 
	
}

void delete_node_from_tail(){
         if(head==NULL){
             printf("List is empty\n"); 
         }	
          else if(head==tail&&head!=NULL){ head=tail=NULL; printf("Node deleted successfully");  //single node
         } 

//pointing to th node one less than tail ;
        else{
            node *p=head;
            while(p->next!=tail)
            p=p->next;	
            tail=p;
            tail->next=NULL;
            printf("Node deleted succesfully");	
        }
}

void delete_node_by_value(){
    int dnode;
	printf("Enter the value of node to be deleted \n");
	scanf("%d",&dnode);	
	if(head==NULL&&tail==NULL) printf("List is empty\n");
	
	else if(head==tail&&head!=NULL&&head->data==dnode){  // if and only if head is only node and it is the element node  
		       head=tail=NULL;		printf("\nnode deleted succesfully");}
    else if(head->data==dnode){printf("\nnode deleted succesfully"); // if element found in the head node 
    	head=head->next;}
    	
   	else{ node *prev,*temp;
	           for(prev=head,temp=head->next;temp!=NULL&&!(temp->data==dnode);prev=prev->next,temp=temp->next);
		if(temp!=NULL){
	        prev->next=temp->next;
			if(temp==tail){
				tail=prev;
				tail->next=NULL;
			}
          printf("\nnode deleted succesfully"); 
		}else printf("\ndata not present in the list");         
	
	}
	
}

// insert node after a particular value;
void insert_by_value(){
	int dnode,value;
	temp= (node *)malloc(sizeof(node));
	printf("Enter the value after which you want to enter the data\n");
	scanf("%d",&dnode);	
	printf("\nEnter  the value of data");
	scanf("%d",&value);
	temp->data=value;
	
	if(head==NULL&&tail==NULL) 
	printf("List is empty\n");
	else if(head==tail&&head!=NULL&&head->data==dnode){  // if and only if head is only node and it is the element node  
		   head->next=temp;
	       tail=temp;
		   tail->next=NULL;	       		
		   printf("\nnode inserted succesfully");
    }else if(head->data==dnode){
    	  temp->next=head->next;
    	  head->next=temp;
	      printf("\nnode inserted succesfully"); // if element found in the head node 
    }else{  node *p;
          for(p=head->next;!(p->data==dnode);p=p->next);
		  if(p!=NULL){
		     temp->next=p->next;
		     p->next=temp;
			 if(p==tail){
			 	tail->next=temp;
			 	tail=temp;
			 	tail->next=NULL;
			 }	  
		  printf("\nnode inserted succesfully");
		  } else printf("element is not found"); 	   
	}
	
}






int count(){
int count;
   if (head==NULL)
      printf("\nLink is empty");
   else{ node *p=head;
       while(p!=NULL){   
         p=p->next;
         count++;
    }
	return count;
   } 	 
}

void search(){
	node *ptr;
	int num,pos=1;
	printf("Enter the node value to be search \n");
	scanf("%d",&num);
	if(head==NULL&&tail==NULL)
	     printf("\nList is empty");
	else{ptr=head;
	    while(!(ptr->data==num)){
	     ptr=ptr->next;pos++;}
		
	} if(ptr=tail->next)
	            printf("\ndata not found in the list");           
      else printf("the node found at the position  =%d",pos);
}




