// fibonacci
#include<stdio.h>
// int fibo(int, int);

int main(){
int a=0,b=1,num;
printf("Enter the number of terms u want in fibb. series\n");
scanf("%d",&num);
printf("%d " "%d ",a,b);

while(num!=2){
 int c=a+b;
 printf("%d ",c);
 a=b;
 b=c;
 num--;	
}

return 0;
}
