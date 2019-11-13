// pointer  to pointer
#include<stdio.h>
int main (){
int a=45;
int *pa;
int **ppa;
pa=&a;
ppa=&pa;
printf("address of a=  %x\n",&a);
printf("value of pa == address of a== %x\n",pa);
printf("value of *pa == value of a== %d\n",*pa);
printf("address of pa=  %x\n",&pa);
printf("value of ppa = address of pa = %x \n",ppa);
printf("value of *ppa = value of pa = %x \n",*ppa);
printf("value of **ppa = value of a = %d\n ",**ppa);
return 0;	
}
