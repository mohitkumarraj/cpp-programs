//cross patterns 
#include <iostream>
using namespace std;

int main(){
	string arr;
	int size;
	cout<<"Enter a string \n";
	getline(cin,arr);
	size=arr.length();
	
	
	
	for(int i=0;i<size;i++){
		int j=size-1-i;
		
		
		for(int k=0;k<size;k++){
			if(k==i||k==j)
			cout<<arr[k];
			else
			cout<<" ";
		}

		cout<<endl;
	

	}

return 0;
	
}


 
