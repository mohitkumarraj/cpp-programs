#include<stdio.h>
int main(){
	
 int num,arr[10],i,max_value;
  printf("Enter the number of the value you want to compare \n");
  scanf("%d",&num);

  printf("Enter the %d values one by one \n  ",num);  
  
  for(i=0;i<num;i++){	
	  scanf("%d",&arr[i]);
  }
  
  max_value=arr[0];
  for(i=1;i<num;i++
  
  ){
     if(arr[i]>max_value)
     max_value=arr[i];  	
  }
  
 printf("number of comparision :%d",i);
printf("\nThe greatest number is :%d ", max_value);

return 0;
}
