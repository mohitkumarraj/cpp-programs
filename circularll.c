#include<stdio.h>

void insert(int value);
int deletenode();
void display();

struct Node {
int data;
struct Node *next;
};
struct Node *head=NULL;

void insert(int value){
	struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
	newNode->data=value;
	struct Node *ptr=head;
	
	if(head==NULL){
		head=newNode;
	 	head->next=head;
	}else{
		while(ptr->next!=head)
		  ptr= ptr->next;
	  	ptr->next=newNode;
		newNode->next=head;
     	head=newNode;	
		
	}	
}

int deletenode(int key){
	struct Node *last=head;
	struct Node *temp;

    struct Node *back,*forth;	
	
	if(head==NULL)
	  return -1;
	
	if(head->data==key&&head->next==head){
		head=NULL;
		free(head);
	}
	
	if(head->data==key){
		while(last->next!=head)
		  last=last->next;

      last->next=head->next;
      free(head);
      head=last->next;

	    
//		temp=head;
//	    head=head->next;
//		last->next=head;
//		free(temp);
	
	}
	
	if(head!=NULL&&head->data!=key){
	  back=head;
	  forth=head->next;
	  	
	  	while(forth!=head&&forth->data!=key){
	  		forth=forth->next;
	  		back=back->next;
		  }	
	   back->next=forth->next; 	
	   return forth->data;
	   free(forth);
	
	}
	
}




void display(){
	struct Node *ptr=head;
	printf("Circular LinkList is  ");
	do{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}while(ptr->next!=head);
	
}

int main(){
int choice,val;

printf("These are the operation you can perform \n\n");
while(1){
	
	printf("\nPress 1 to Insert in circular Link list\n");
	printf("Press 2 to delete from circular Link list\n");
	printf("Press 3 to traverse list\n");
    scanf("%d",&choice);
	
	 if(choice==0)
	  break;
	
	switch(choice){
		case 1:{
			printf("Enter the value of Node\n");
			scanf("%d",&val);
		    insert(val);
			break;
		}
		case 2:{
			printf("Enter the value of Node to be deleted \n");
			scanf("%d",&val);
			 int re=deletenode(val);
			 if(re==-1) 
		    	printf("List is empty");
		     else
			 	printf("%d node Deleted successfully");
			break;
		}
		case 3:{
			display();
			break;
		}
	}	
}

return 0;	
}
