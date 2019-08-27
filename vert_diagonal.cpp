#include<iostream>
using namespace std;

int main(){
	string line;
	int size;
    cout<<"Enter a string\n";
	getline(cin,line);
    size=line.length();	
	
	for(int i=0;i<=size;i++){
		for(int j=0;j<=size;j++){
			if((i+j)==size)
			cout<<line[j];
			else
			cout<<" ";
		}
		cout<<endl;
	}
	
return 0;	
}
