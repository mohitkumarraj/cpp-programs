// to extend the size of currrent pointer reallocating the memory 
#include<stdio.h>
int main(){
int i,*p,n=4;

p=(int *)malloc(n*sizeof(int));
if(p==NULL){
	printf("Mermory not available");
  return 1;
}

for(i=0;i<n;i++){
 printf("Enter Integer\n");
 scanf("%d",p+i);	
}
for(i=0;i<n;i++){
 printf("%d\t",*(p+i));	
}

p=(int*)realloc(p,9*sizeof(int));  // 9 is the total size

if(p==NULL){
	printf("Mermory not available");
  return 1;
}

for(i=5;i<9;i++){
 printf("\nEnter four more Integer\n");
 scanf("%d",p+i);	
}

for(i=5;i<9;i++){
 printf("%d\t",*(p+i));	
}





return 0;	
}
