#include<stdio.h>
int main(){
unsigned char var;
for(var=32;var<225;var++){
printf("%d = %c\t",var,var);
if(var%8==0)
  printf("\n");

} 


return 0;	
}
