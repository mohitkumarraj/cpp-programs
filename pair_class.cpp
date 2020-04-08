#include<iostream>
#include<tuple>
#include<map>
using namespace std;
 // pair is a class that already defined
 class student{
string name;
int age;
public:
void setStudent(string a,int age){
	name=a;
	this->age=age;
}


void showStudent(){
	cout<<"\nName:="<<name;
    cout<<"\nAge:="<<age;	
}
 	
};



int main(){
	
pair<string,int>p1;
pair<string,string>p2;
pair<string,float>p3;
pair<int,student>p4;
	
//inserting value in pair 
p1=make_pair("mohit",21);
p2=make_pair("mohit","Rohit");
p3=make_pair("mohit",21.4);

tuple<string,int,int>t1;

t1=make_tuple("john",4562,23);




student s1;
s1.setStudent("Shivam",28);
p4=make_pair(4,s1);

//accessing  paired element 
cout<<"First pair=";
cout<<p1.first<<" "<<p1.second;
cout<<"\nSecond pair=";
cout<<p2.first<<" "<<p2.second;

cout<<"\nThird pair=";

cout<<p3.first<<" "<<p3.second;

cout<<"\nFourth pair=";

cout<<p4.first;
student sobj=p4.second;
sobj.showStudent();

cout<<"\n\n";
cout<<"tuple is ";

cout<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1);


return 0;	
}  
