#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int A[] = {2, 3, 5, 7, 10};
    int sum = 14;

    int size = sizeof(A) / sizeof(A[0]);

    int arr[size][sum + 1];


  cout<<"The size of array is ="<<size<<"\n";
    //first column;
    for (int i = 0; i <size; i++)
    {
        arr[i][0] = 1;
    }

    // first row
    for (int j = 1; j <=sum; j++)
    {
        if (j == A[0])
            arr[0][j] = 1;
        else
            arr[0][j] = 0;
    }
 
  // dynamic table;

  for(int i=1;i<size;i++){
      for(int j=1;j<=sum;j++){
           if(A[i]>j||arr[i-1][j]==1)
               arr[i][j]=arr[i-1][j];
           else
              arr[i][j]=arr[i-1][j-A[i]];
      }
  }




    //table	 	 
	for(int i=0;i<size;i++){
		for(int j=0;j<=sum;j++){
			cout<<arr[i][j]<<" ";
		}
	cout<<"\n";
	}

    return 0;
}
