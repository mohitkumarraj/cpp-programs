#include<iostream>
#include<string.h>
using namespace std;

class stackclass {
	public:
		char arr[100];
		int ptr;
		int size;
		
		stackclass(int si){
			size=si;
			ptr=-1;
		}

		bool isEmpty(){
          
		  if(ptr==-1)
             return true;
          else
             return false;
        }
        
		bool isFull()
         {
          if(ptr==size)
             return true;
          else
             return false;
        }
		
		void push(char ch){
			if(isFull()){
				cout<<"\nStack is full can't add more parenthesis";
			}else{
				arr[++ptr]=ch;
			}
		}
		
		char pop(){
			char d;
			if(isEmpty()){
				cout<<"\nStack isEmpty";
			}
			else{
			d=arr[ptr];
			ptr--;
			}
			return d;
		}
		
		
	    bool expres(char exr[]){
	    	for(int i=0;i<size;i++){
	    		if(exr[i]=='{'|| exr[i]=='('||exr[i]=='['){
	    			push(exr[i]);
	    			continue;
				}
					          
			  switch(exr[i]){
			  	
			  	case ')':{
			  		     char x=pop();
			  		     if(x=='{'||x=='[')
			  		       return false;
			  			break;
				  }
				  
				  case '}':{
				  	
				  	   char x=pop();
			  		     if(x=='('||x=='[')
			  		       return false;
				  	
					break;
				  }
				  case ']':{
				  	   char x=pop();
			  		     if(x=='{'||x=='(')
			  		       return false;
					break;
				  }
				  
				  
				  
				  
			  }  // end of switch case;		
	    		
			} // end of for loop
		
		return isEmpty();
		}	//end of function;
		
	
		void show(){
			cout<<"\nString is ";
          for(int i=0;i<size;i++){
	    		cout<<arr[i];
			}
		}
			
};





int main(){
	
	
	char arr[]="[]{(3+2)+[(5-2)]}";
	
	cout<<"Length of String is ";
	int size=strlen(arr);
	cout<<size;
    stackclass obj(size);

	
	bool status;
	status=obj.expres(arr);
	
	if(status)
	cout<<"\nExpression is Balanced";
	else
	cout<<"\nExpression is UnBalanced";
	
return 0;	
}
