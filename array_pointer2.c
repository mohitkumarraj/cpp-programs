// array of pointers 
#include<stdio.h>
int main(){
int i,j,arr[3][4]={       {10,11,12,13},
                          {20,21,22,23},
                          {40,41,42,43}
};

int *pa[3];


for(i=0;i<3;i++)
 pa[i]=arr[i];

for(i=0;i<3;i++){
	for(j=0;j<4;j++)
	    printf(" %d ",pa[i][j]);
printf("\n");
}

printf("\n\n");

for(i=0;i<3;i++){
	for(j=0;j<4;j++)
	    printf(" %d ",*(*(pa+i)+j));
printf("\n");
}
return 0;	
}
