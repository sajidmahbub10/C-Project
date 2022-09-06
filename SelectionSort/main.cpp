#include<iostream>

using namespace std;

int arr[100];


void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sSort(int *arr, int n)
{
    int i, j,smallest;


    for (i = 0; i < n-1; i++)
    {   smallest = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[smallest])
            smallest = j;
        swap(&arr[smallest], &arr[i]);
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
    sSort(arr,n);
    pA(arr,n);
    return 0;
}


