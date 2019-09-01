// comparing numbers 
#include<stdio.h>
int main(){
  int i,j,num,arr[10],max_value;
  printf("Enter the number of values you want to compare  ");
  scanf("%d",&num);
  printf("Enter the numbers one by one \n");
  for(i=0;i<num;i++){
  	scanf("%d",&arr[i]);
  } 
  	
  max_value=arr[0];
  for(i=0;i<num;i++){
  	
  	if(arr[i]>max_value)
  	  max_value=arr[i];
  }
  
    
printf("The maximum number is=  %d",max_value);

return 0;	
}
