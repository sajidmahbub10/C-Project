
#include <iostream>
using namespace std;

void maxHeap(int a[], int i, int n)
{
    int lc =(2*i)+1;
    int rc =(2*i)+2;
    int large;
    if(lc<n && a[lc]>a[i])
     {
         large = lc;
     }
    else
    {
       large = i;
    }

    if(rc<n && a[rc]>a[large])
        {large = rc;}
    if(large!=i)
    {
        swap(a[large],a[i]);
maxHeap(a,large,n);
    }

}

void buildMaxheap(int a[], int n)
{
    int i;
    for (i =((n/2)-1); i >= 0; i--)
    {
        maxHeap(a, i, n);
    }
}
int main()
{
    int n, i;
    cout << "ARRAY SIZE ";
    cin >> n;
    int a[n];
    cout<<"Enter Numbers : "<<endl;
    for (i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    cout << "                    " << endl;
    buildMaxheap(a, n);
    cout << "Max Heap ";
    for (i = 0; i < n; i++)
    {
        cout << " " << a[i] << " ";
    }
    return 0;
}
