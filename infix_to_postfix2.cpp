#include<iostream>
#include<string.h>
using namespace std;

class stackk{
		public:
		char arr[100];
		int ptr;
		int size;
		
		stackk(int si){
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
		
		
		
			int priority(char ch){
			if(ch=='*'||ch=='/'){
				return 3;
			} else if(ch=='+'||ch=='-'){
				return 2;
			}else return 0;
		}
		
		int isOperator(char ch){
			if(ch=='+'||ch=='-'||ch=='/'||ch=='*'||ch=='('||ch=='['||ch=='{')
			  return 1;
			else 
			   return 0;  
		}
		
		
	 void show(){
        	while(ptr!=-1){
	        cout<<arr[ptr]<<"\n";	
	        ptr--;
     }
}


    string convert(char infix[]){
    	
    	int i=0;
    string postfix = "";   
    while(infix[i]!='\0')
    {       
        if(infix[i]>='a' && infix[i]<='z'|| infix[i]>='A'&& infix[i]<='Z')          
        {
            postfix.insert(postfix.end(),infix[i]);
            i++;
        }       
        else if(infix[i]=='(' || infix[i]=='{'  || infix[i]=='[')
        {
            push(infix[i]);
            i++;
        }        
        else if(infix[i]==')' || infix[i]=='}'  || infix[i]==']')
        {
            if(infix[i]==')')
            {
                while(arr[ptr]!='(')
                {               postfix.insert(postfix.end(),pop());
                }
                pop();
                i++;
            }
            if(infix[i]==']')
            {
                while(arr[ptr]!='[')
                {
                    postfix.insert(postfix.end(),pop());
                }
                pop();
                i++;
            }
 
            if(infix[i]=='}')
            {
                while(arr[ptr]!='{')
                {
                    postfix.insert(postfix.end(),pop());
                }
                pop();
                i++;
            }
        }
        else            
        {
            if(ptr==-1)
            {
                push(infix[i]);
                i++;
            }
 
            else if( priority(infix[i]) <= priority(arr[ptr])) {
                postfix.insert(postfix.end(),pop());
               
                while(priority(arr[ptr]) == priority(infix[i])){
                    postfix.insert(postfix.end(),pop());
                    if(ptr < 0) {
                        break;
                    }
                }
                push(infix[i]);
                i++;
            }
            else if(priority(infix[i]) > priority(arr[ptr])) {
                push(infix[i]);
                i++;
            }
        }
    }
    while(ptr!=-1)
    {
        postfix.insert(postfix.end(),pop());
    }
//    cout<<"The converted postfix string is : "<<postfix; //it will print postfix conversion  
    return postfix;
   	      
   }
   
		

};



int main(){
//	char input[]="a-b+t/6";
char input[]="a=b*2+5";
//	char input[]= "((A+(B*C))+D)";
	string postfix="";
	stackk obj(strlen(input));
	postfix = obj.convert(input);
	cout<<"\nPostfix Expression is ";
    cout<<postfix;
	


}
