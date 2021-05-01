#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int total_size;
    int used_size;
    int *ptr;
}myADt;

void creatArray(myADt *a, int tsize,int usize){
 a->total_size=tsize;
 a->used_size=usize;
 a->ptr=(int *)malloc(a->total_size*sizeof(int));
}


void setVal(myADt *a){
    int n;
    int i;
 printf("Enter elements of Array\n");
	for (  i = 0; i < a->used_size; i++)
    {
        printf("Enter %dth  Element  ",i);
        scanf("%d",&n);
         (a->ptr)[i]=n;
    }   
}


void show(myADt *a){
 printf("Elements of Array are \n")	;
	for ( int i = 0; i < a->used_size; i++)
    {
        printf("%d ",(a->ptr)[i]);
//        printf("\n");
    }   
}

int main()
{
  myADt adt1;
  creatArray(&adt1,100,5);
  setVal(&adt1);
  show(&adt1);
  printf("Moiht Rajbhar");
}
