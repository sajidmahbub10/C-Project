


#include <iostream>



using namespace std;



struct LNode{

int data;

struct LNode *next;};



struct LNode *head = NULL, *curr = NULL;



void Node_Create(int Data)

{

     struct LNode *np = new LNode;

np -> data = Data;

np -> next = NULL;

if (head== NULL){

head = np;

curr = np;

}

else



    {

        curr ->next = np;

        curr =np;

    }

}













void deleteLast()

{ LNode* np =head;

    while(np->next->next!=NULL)

    {

        np=np->next;



    curr=np;

    delete (curr->next);

    }

    curr->next=NULL;

}





void Display()

{

     LNode *np = head;

     while(np !=NULL){

     cout<<np->data<<" ";

     cout<<endl;

     np=  np-> next;}

}



int main()

{int n;

    do{

            cout<<"To Push Element press 1"<<endl;

            cout<<"To Pop Element press 2"<<endl;

            cout<<"Display press 3"<<endl;


    cin>>n;

    if(n==1){

int Data;

 int a;
    cout << "ENTER DATA : " << endl;
    cin>>Data;
     Node_Create(Data);
cout<<endl;
    }
    if(n==2){int l ;

             deleteLast();
cout<<endl;
    }

    if(n==3){
cout<<endl;
Display();
cout<<endl;
    }

    }

while(n!=0);

    return 0;

}









