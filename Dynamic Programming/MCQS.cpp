#include<iostream>
using namespace std;

int main(){

int m=10;   //it cannot be constant value 
int &n=m;  //reference to other variable .. refer to single address
//n=6;
cout<<m<<n;
return 0;	
}
