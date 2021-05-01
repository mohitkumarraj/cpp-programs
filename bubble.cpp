#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}

void Bubble(int a[30],int n)
{
    int flag=0;
    for(int i=0; i<n-1; i++)
        {
            flag=0;

          for(int j=0; j<n-i-1; j++)
              {
                if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]); flag=1;
                }
              }
           if(flag==0) break;
        }
}


int main()
{
int a[30],size;

cout<<"Enter the size of array"<<endl;
cin>>size;
cout<<"Enter the array"<<endl;

for (int i=0; i<size; i++)
cin>>a[i];

Bubble(a,size);

cout<<"\n sorted array is"<<endl;

for (int i=0; i<size; i++)
cout<<a[i]<<endl;


return 0;
}
