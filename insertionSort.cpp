#include<iostream>
using namespace std;

void insertion(int a[30],int n)
{
    int min,j;

    for(int i=1; i<n; i++)///////// main iteration
    {

        min=a[i];
        j=i-1;
        //cout<<"a[i] ="<<a[i]<<endl;
        while(j>=0 &&a[j]>min)/////to find minimum value from rest of the array
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=min;
    }
}

int main()
{

     int a[30],size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    cout<<"enter the array"<<endl;

    for(int i=0; i<size; i++)
    cin>>a[i];

    insertion(a,size);

    cout<<"Sorted array is"<<endl;
    for(int i=0; i<size; i++)
    cout<<a[i]<<endl;


}
