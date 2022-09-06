


#include <iostream>



using namespace std;








int main()

{

int a[10][10];

    int l,m,i,j;

    cout<<"Enter The Number of rows :";

    cin>>l;

  cout<<"Enter The Number of column :";

  cin>>m;

  cout<<"Enter The Elements : "<<endl;

      for(int i = 0;i<l; i++)

    {

        for(int j = 0; j<m; j++)

        {

            cout<< " Enter elements = " <<i+1<<" , "<<j+1<< " : ";

            cin>>a[i][j];

        }

    }

cout<<"Actual Matrix "<<endl;

for(int i = 0; i<l; i++)

    {

        for(int j = 0;j<m; j++)

        {

            cout<<a[i][j]<<"  ";

        }

        cout<<endl;

    }



cout<<"Transpose Matrix "<<endl;


for(int j = 0; j<m; j++)

    {

        for(int i = 0;i<l; i++)

        {

            cout<<a[i][j]<<"  ";

        }

        cout<<endl;

    }














    return 0;

}

