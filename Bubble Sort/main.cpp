#include<iostream>

using namespace std;

int arr[100];


void bS(int *arr, int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


void pA(int *arr, int n)
{
    int i;
    cout<<"Sorted Array"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
        cout<<endl;
    }
}

int main()
{
    int n,x,i;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter Array Element : "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    bS(arr,n);
    pA(arr,n);
    return 0;
}

