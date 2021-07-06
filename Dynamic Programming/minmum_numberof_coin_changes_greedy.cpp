#include<iostream>
using namespace std;

int main(){
int amount,total_coin=0,number;
int coin[]={10,5,2,1};
int count[]={0,0,0,0};

//int coin[]={9,6,5,1};
//int count[]={0,0,0,0};


// this is greedy approach that is not optimal solution of this minimum number of coin

cout<<"Enter Amount \n";
cin>>amount;

while(amount!=0){
	
	if(amount>=coin[0]){
       number=(amount/coin[0]);
       count[0]=number;
       total_coin+=number;
	 amount=amount-number*coin[0];
		 
	}else if(amount>=coin[1]){
		number=(amount/coin[1]);
        count[1]=number;
	    total_coin+=number;
	 amount=amount-number*coin[1];

	}else if(amount>=coin[2]){
		number=(amount/coin[2]);
		count[2]=number;
       total_coin+=number;
	 amount=amount-number*coin[2];

	}else{
//		count[3]=1;
 count[3]++;
		total_coin+=1;
		amount=amount-1;
	}
}

cout<<"minumum number of coins are "<<total_coin;
cout<<"\nthere distribution is as follow\n";
for(int i=0;i<4;i++){	
	cout<<"Number of "<< coin[i]<<" Rupees coin are = "<<count[i]<<"\n";
}
	
	
return 0;	
}
