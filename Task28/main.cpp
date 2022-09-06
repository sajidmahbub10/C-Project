#include <iostream>

using namespace std;
int top = -1;
int size =5;
 int a[5];
void push (int z)
{
    if(top == size-1){cout<<"Stack is Full"<<endl;
    }
    else{a[++top]=z;
    cout<<"Element Added"<<endl;
    }
}

void pop()
{
    if(top==-1)
    {
        cout<<"Stack Empty"<<endl;
    }
    else{top--;
    cout<<"Element Deleted"<<endl;}
}

void Top()
{
    cout<<"The top value is "<<a[top]<<endl;
}

void display()
{
      if(top==-1)
    {
        cout<<"Stack Empty"<<endl;
    }
    else{

     for(int i = 0; i<=top; i++)
     {
         cout<<a[i]<<endl;
     }
    }
}


int main()
{    int l,i,d;
     do{
     cout<<"Choose what you want to do!!"<<endl;

     cout<<"Press 1 for push"<<endl;
     cout<<"Press 2 for pop"<<endl;
     cout<<"Press 3 for top"<<endl;
     cout<<"Press 4 for display"<<endl;
     cout<<"Press o to end"<<endl;
cin>>d;
   if(d==1){
    do{
    cout<<"Enter an element : "<<endl;
    cin>>l;
    push(l);
    i++;
break;
    }while(i!=5);
   }

   if (d==2)
   {
      pop();
   }
   if(d==3)
   {
       Top();
   }
    if(d==4)
    {
        display();
    }
   }while(d!=0);
    return 0;
}
