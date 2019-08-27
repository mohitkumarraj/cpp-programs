#include<stdio.h>
int main(){
	int num,rem,i,in,sum=0;
	printf("Enter the divisible number of which you want the sum\n");
	
    scanf("%d",&num);
    rem=100%num;
    in = 100+(num-rem);
    
    printf("%d",in);
    for(i=in;i<1000;i=i+num)
      sum+=i;
      
    printf("the sum of the number is :%d",sum);
    
 return 0;
}
