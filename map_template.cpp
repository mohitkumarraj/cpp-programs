//map
#include<iostream>
#include<map>
using namespace std;

int main(){

map<int ,string>customer{{100,"mohit"},{101,"Rohit"},{102,"Shobhit"}};
cout<<customer.at(100);
customer.insert(pair<int,string>(103,"Rahul"));
cout<<"\n";
cout<<customer.at(103);

customer.insert(pair<int,string>(104,"Nitin"));
customer.insert(pair<int,string>(105,"Peeyush")); 

cout<<"\n\n\n";
map<int,string>::iterator p=customer.begin();

while(p!=customer.end()){
	cout<<(p->second)<<endl;
	p++;
}

return 0;	
}
