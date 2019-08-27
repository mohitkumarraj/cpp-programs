#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int choice,i,l,j;
	printf("Enter the String\n");
	gets(str);
	l=strlen(str);
	
	 //checking;

	do{                //menu bar 
	   printf("\nPress 1 to print the string in single row\n");	
	   printf("Press 2 to print the string in single column\n");
	   printf("Press 3 to print the string in single  diagonal\n");
	   printf("Press 4 to print the string in both diagonal\n");
	   printf("Press 5 to print the string on all edges\n");
	   printf("Press 6 to print the string in all edges and diagonal\n");
	   printf("Press 0 to exit\n");
	   printf("\n");
	   printf("Enter your choice");
	   scanf("%d",&choice);
	   
       printf("your choice is :%d",choice);
       printf("\n");
	   
	   switch(choice){
	 
	   	case 1 : {
	   	            for(i=0;i<l;i++)
					   printf("%c\t",str[i]);           
	   		break;
	   	   }
	   	case 2 :{
	   		        for(i=0;i<l;i++)
					   printf("%c\n",str[i]);           
	   		
			break;
		   }	 
		   
		case 3:{  for(i=0;i<l;i++){
			          for(j=0;j<l;j++){
			          	if(i==j)
			          	  printf("%c",str[i]);
			          	else
                          printf(" ");
					  }	  
		          printf("\n");
				  }          	
			break;
		}   
	   
	   case 4:{  for(i=0;i<l;i++){
			          for(j=0;j<=l;j++){
			          	if(i==j||(i+j)==l-1)
			          	  printf("%c",str[i]);
			          	else
                          printf(" ");
					  }	  
		          printf("\n");
				  } 
		break;
	   }
	   
	   case 5:{ for(i=0;i<=l;i++){
			          for(j=0;j<=l;j++){
			          	if(i==0||j==0||i==l||j==l)
			          	  printf("*");
							//printf("%c\t",str[i]);
			          	else
                          printf(" ");
					  }	  
		          printf("\n");
				  }
	   	
		break;
	   }
	   
	  case 6 :{   for(i=0;i<=l;i++){
			          for(j=0;j<=l;j++){
			          	if(i==0||j==0||i==l||j==l||i==j||(i+j)==l-1)
			          	  printf("*");
							//printf("%c\t",str[i]);
			          	else
                          printf(" ");
					  }	  
		          printf("\n");
				  }
	  	
		break;
	  } 
	   
	   
	   	
		default : printf("wrong input\n");   	
	   }
	   
	  	   	
	 }while(choice!=0);
	
	printf("\nyou have exited  from the program");
	return 0;
}
