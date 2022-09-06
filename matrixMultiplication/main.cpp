#include <iostream>

using namespace std;

int main()
{
    int a[3][3],b[3][3];
int multy[3][3];


    cout<<"Enter the elements of first matrix : "<<endl;

    for(int i = 0;i<3; ++i)
    {
        for(int j = 0; j<3; ++j)
        {
            cout<< " Enter elements = " <<i+1<<" "<<j+1<< " : ";
            cin>>a[i][j];
        }
    }





     cout<<"Enter the elements of second matrix : "<<endl;

    for(int i = 0;i<3; ++i)
    {
        for(int j = 0; j<3; ++j)
        {
            cout<< " Enter elements = " <<i+1<<" "<<j+1<< " : ";
            cin>>b[i][j];
        }
    }


    for(int i = 0;i<3; ++i)
    {
        for(int j = 0; j<3; ++j)
        {
            multy[i][j]=0;
        }
    }






    for(int i = 0; i<3; ++i)
    {
        for(int j = 0; j<3; ++j)
        {
            for(int l=0; l<3; l++){

         multy[i][j] = multy[i][j]+a[i][j]*b[i][j];
            }
             }
    }


     for(int i = 0; i<3; ++i)
    {
        for(int j = 0; j<3; ++j)
        {
           cout<<multy[i][j]<<"   ";
             }
             cout<<endl;
    }


    return 0;
}

