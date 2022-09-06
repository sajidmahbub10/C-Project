#include <iostream>



using namespace std;

void Merge (int *x,int y,int *a,int b, int *w)
{
int i =0,j=0;


    for ( i = 0; i<y; i++)
    {
      w[i]=x[i];
    }

for (j = 0; j<b;j++)
{
    w[i++]=a[j];
}



}



int main()

{

    int a[100],b[100],l,m;
int c[100];

cout<<"How many values you want to input in the first array : ";
cin>>l;
    cout<<"Enter The Values Of the first Array : "<<endl;

    for(int i = 0; i<l; i++)

    {

        cin>>a[i];

    }
    cout<<"How many values you want to input in the second array : ";
    cin>>m;
    cout<<"Enter The Values Of the second Array : "<<endl;
    for(int i = 0; i<m; i++)

    {

        cin>>b[i];

    }

Merge(a,l,b,m,c);

cout<<"Array after merging"<<endl;
int v=l+m;
for (int i= 0;i<v;i++)

{
    cout<<c[i]<<endl;
}


for (int i= v;i>=0;i--)

{
    cout<<c[i]<<endl;
}







    return 0;

}
