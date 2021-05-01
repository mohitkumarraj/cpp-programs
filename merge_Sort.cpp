#include<iostream>
#include<stdlib.h>
using namespace std;

void merge(int arr[],int low,int high,int mid)
{
    int i=low,a[100];
    int j=mid+1;
    int k=0;
    while(i<=mid&&j<=high)
    {
        if(arr[i]>arr[j])
        {
            a[k]=arr[j];
            k++;
            j++;
        }

        else
        {
            a[k]=arr[i];
            k++;
            i++;
        }

    }

    while(j<=high)
    {

            a[k]=arr[j];
            k++;
            j++;

    }


        while(i<=mid)
        {
            a[k]=arr[i];
            k++;
            i++;
        }

        i=low;
        j=0;

        while(i<=high)
        {
            arr[i++]=a[j++];
        }

    return ;
}

void Merge_Sort(int *arr,int low,int high)
{


    if(high>low)
    {   int mid=(low+high)/2;
        Merge_Sort(arr,low,mid);
        Merge_Sort(arr,mid+1,high);
        merge(arr,low,high,mid);
    }

    else
    return ;
}

int main()
{
   int size,arr[20],a[20];
   cout<<"Enter the size"<<endl;
   cin>>size;
   cout<<"Enter the no."<<endl;
   for(int i=0; i<size; i++)
   cin>>arr[i];
   cout<<endl;
   Merge_Sort(arr,0,size-1);
   for(int i=0; i<size; i++)
   cout<<arr[i]<<" ";



}
