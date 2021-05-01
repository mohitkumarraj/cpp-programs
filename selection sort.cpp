#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}

void Selection(int a[30],int n)
{

    int min;
    for(int i=0; i<n-1; i++)
    {
        int k=i;
        min=a[i];

        for(int j=i+1; j<n; j++)
        {
            if(min>a[j])
                {
                    min=a[j];
                    k=j;
                }
         }

        swap(a[i],a[k]);


       // if(a[j]==min)

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

    Selection(a,size);

    cout<<"Sorted array is"<<endl;
    for(int i=0; i<size; i++)
    cout<<a[i]<<endl;

  }
