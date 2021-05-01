#include<iostream>
#include<string.h>
using namespace std;

class pallindrome{
	public:
		char arr[100];
		int ptr;
		int size;
		
		pallindrome(int si){
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
        
        void check(char arr[],int len){
        int mid,flag=0;
        char x;
        mid=len/2;
		if(len%2!=0){
		for(int i=0;i<mid;i++){
               push(arr[i]);
			} 
		}else{
			for(int i=0;i<(mid-1);i++){
               push(arr[i]);
			} 
		}
	   mid=mid+1;
	   while(ptr!=-1&&mid<len){
 			   x=pop();    
// 			   cout<<x<<" "<<arr[mid]<<"\n";
			  if(x!=arr[mid]){
				  flag=1;
			     break;
			  }
			mid=mid+1;
	 }
	 
	 
	 if(flag==0)
	   cout<<"\nString is pallindrome";
	 else
	     cout<<"\nString is Not pallindrome";
	
}//end of function 
	

};


int main(){
//	char arr[]="12345677654321";
//    char arr[]="malayalam";
	
//	char arr[]="nitin";	

   char arr[50];
	
	cout<<"Enter A String  \n";
	cin>>arr;
	
	int length=strlen(arr);
	pallindrome obj(20);
    obj.check(arr,length);

	
	return 0;
}
