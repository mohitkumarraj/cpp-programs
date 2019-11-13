//dynamicallly allocating memory
#include<stdio.h>
int main(){
int i,*p,n;
printf("Enter the number of integers to be entered :");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
if(p==NULL){
	printf("Mermory not available");
  return 1;
}
for(i=0;i<n;i++){
 printf("Enter th Integer\n");
 scanf("%d",p+i);	
}
for(i=0;i<n;i++){
 printf("%d\t",*(p+i));	
}
return 0;	
}
