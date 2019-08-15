#include<iostream>
using namespace std;

main(){
string var;
int size;
cout<<"Enter the name\n";
getline(cin,var);
size=var.length();

cout<<"your diagonal array is \n";

for(int i=0;i<size;i++){
	for(int j=0;j<=i;j++){
		if(i==j){
			cout<<var[j];
		}else{
			cout<<" ";
		}
		
	}			
	cout<<"\n";
}

return 0;

}


