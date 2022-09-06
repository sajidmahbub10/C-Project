#include<iostream>

using namespace std;


 void insertationSort(int arr[],int n)
{
    int i,item,j;
    for(i=1;i<n;i++)
    {
        item = arr[i];
        j=i-1;
        while(j>=0 && arr[j]> item )
        {

            arr[j+1] = arr[j];

           j=j-1;
        }


        arr[j+1]=item;

    }
}

void printArray(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {   cout<<arr[i]<<"  ";
         cout<<endl;
     }

}



int main()
{

    int n,x,i;
    cout<<"Enter size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements : ";
    for(i =0; i<n; i++)
    {
        cin>>arr[i];

    }

    insertationSort(arr,n);
    printArray(arr,n);
    return 0;
}
