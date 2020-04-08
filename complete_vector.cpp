#include<iostream>
#include<list>
#include<tuple>
#include<vector>
using namespace std;

int main(){
    int num,val,index;
	vector<int>arr{11,22,26,27,32,35,46,50,55,58,60,65,70};
	
	tuple<string,int,char>t1;
    tuple<string,int,char>t2;
	t1=make_tuple("mohit",21,'M');
    t2 =make_tuple("John",26,'M');

cout<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1);
cout<<"\n";
cout<<get<0>(t2)<<" "<<get<1>(t2)<<" "<<get<2>(t2);
	
	
	do{
		cout<<"\npress 1 to enter value \n";
		cout<<"press 2 to pop value \n";
		cout<<"press 3 to know current capacity and size of  vector\n";
		cout<<"press 4 to know value at specified index \n";
		cout<<"press 5 to know front and back element\n";
		cout<<"press 6 to Show vector\n";
		cout<<"press 7  to inser value at  specified index \n";
		cout<<"press 0 to exit  \n";	
		cin>>num;
		switch(num){
			case 1:{
				      cout<<"Enter value \n";
				      cin>>val;
                      arr.push_back(val);
				
				break;
			}
			case 2:{
				
				   arr.pop_back();
				  	 
				break;
			}
			
			case 3:{
				 cout<<"Current capacity of vector is="<<arr.capacity();
				 cout<<"\nCurrent Size of vector is="<<arr.size();
    			 cout<<"\n\n";
				break;
			}
			case 4:{
				      cout<<"Enter index  \n";
				      cin>>val;
                      cout<<"\nValue at index "<<val<<" is "<<arr.at(val);
	
				break;
			}
			
			
			
			case 5:{
				      cout<<"Front  value  is "<<arr.front();
				      cout<<"\nBack  value  is "<<arr.back();
				break;
			}
			case 6:{
			  cout<<"List is = ";
			  for(int i=0;i<arr.size();i++)
			    cout<<arr.at(i)<<"\t";
				break;
			}
			
			case 7 :{
				    cout<<"Enter value to be inserted \n";
				    cin>>val;
				    
				  cout<<"Enter position\n";
				    cin>>index;
				    
				    vector<int>::iterator p=arr.begin();
				    arr.insert(p+index-1,val);
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


/*
int main(){
	tuple<string,int,char>t1;
    tuple<string,int,char>t2;
	t1=make_tuple("mohit",21,'M');
    t2 =make_tuple("John",26,'M');

cout<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1);
cout<<"\n";
cout<<get<0>(t2)<<" "<<get<1>(t2)<<" "<<get<2>(t2);
	

return 0;	
} */
