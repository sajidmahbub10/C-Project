#include <iostream>

using namespace std;
int size =5;
 int a[5];
 int f = -1;
 int r = -1;
 void EnQueue(int z)
 {
     if(r==size-1)
     {
         cout<<"Queue Full"<<endl;

     }
     else{
        r++;
        a[r]=z;
        if(f==-1)
        {
            f++;
        }
     }

 }

 void Dequeue()
 {
    if((f==-1 &&r==-1 ||f>r ))
    {
        cout<<"Queue is Empty"<<endl;
    }

    else{
        f++;
        cout<<"Data Dequeue Complete"<<endl;
    }
 }



 void display()
{
      if((f==-1 &&r==-1 ||f>r ))
    {
        cout<<"Queue Empty"<<endl;
    }
    else{

     for(int i = f; i<=r; i++)
     {
         cout<<a[i]<<endl;
     }
    }
}


int main()
{


     int l,i,d;
     do{
     cout<<"Choose what you want to do!!"<<endl;

     cout<<"Press 1 for Enqueue"<<endl;
     cout<<"Press 2 for Dequeue"<<endl;

     cout<<"Press 3 for display"<<endl;
     cout<<"Press o to end"<<endl;
cin>>d;
   if(d==1){
    do{
    cout<<"Enter an element : "<<endl;
    cin>>l;
    EnQueue(l);
    i++;
break;
    }while(i!=5);
   }

   if (d==2)
   {
      Dequeue();
   }

    if(d==3)
    {
        display();
    }
   }while(d!=0);
    return 0;
}
