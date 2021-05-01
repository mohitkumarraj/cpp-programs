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

		int precedence(char ch){
			if(ch=='*'||ch=='/'){
				return 3;
			} else if(ch=='+'||ch=='-'){
				return 2;
			}else return 0;
		}
		
		int isOperator(char ch){
			if(ch=='+'||ch=='-'||ch=='/'||ch=='*')
			  return 1;
			else 
			   return 0;  
		}
		
		
	
	 stackk convert(char infix[]){
	 	int length=strlen(infix);
	 	 stackk pos(length);
	 	int i=0;int j=0;
	 	
		 while(infix[i]!=length){
	 		if(!isOperator(infix[i]){
	 			pos.push(infix[i]);
	 			i++;j++;
				 		
			 }
		 }
	 }
	 
	 
};





//int main(){
//	
//	char infix[]="a-b+t/6";
//	
//return 0;
//}
