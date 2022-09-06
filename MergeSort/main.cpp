#include <iostream>

using namespace std;

void Swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void printArray(int *a, int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << a[i] << " ";
  cout << endl;
}


void Merge( int *a, int start , int mid, int End)
{
    int i = start, j = mid+1;
    int b[End-start+1], k=0;
    for(int z=start; z<=End; z++)
    {
        if(i>mid)
            b[k++]=a[j++];
        else if (j>End)
            b[k++]=a[i++];
        else if(a[i]<a[j])
            b[k++]=a[i++];
        else
            b[k++]= a[j++];
    }
    for (int p =0; p<k; p++)
        a[start++]=b[p];
}


void mergeSort(int *a, int start, int End)
{
    if (start<End)
    {
        int mid = (start+End)/2;
        mergeSort(a,start,mid);
        mergeSort(a,mid+1,End);
        Merge(a,start, mid, End);
    }
}







int main()
 { int a[111];
 int n;
  cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter Array Element : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
  mergeSort(a, 0, n - 1);
  cout << "Sorted array in ascending order: \n";
  printArray(a, n);
}
