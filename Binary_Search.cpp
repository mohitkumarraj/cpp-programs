/////////////////////////////linear search ////////////////////
#include<iostream>

using namespace std;

void Binary_Search(int arr[],int &size,int ele)
{
    int first=0,last=size-1;
    int flag=0;
    while(first<=last)
    {
       int  mid=(first+last)/2;
        if(mid==ele)
        {
            cout<<"Element is found at position "<<mid+1<<endl;
            flag=1;
            break;
        }

        else if(mid>ele)
        {
            last=mid-1;
        }

        else
        {
            first=mid+1;

        }
    }

    if(flag==0)
    {
        cout<<"Element is not found"<<endl;
        arr[size++]=ele;
        cout<<"Element has been inserted at position "<<size<<endl;
    }
}

int main()
{
    int size,arr[20],ele;
    cout<<"Enter the size"<<endl;
    cin>>size;

    cout<<"Enter the array"<<endl;
    for(int i=0; i<size; i++)
    cin>>arr[i];
    cout<<"Enter the element which you want to search"<<endl;
    cin>>ele;

    Binary_Search(arr,size,ele);
    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
}
