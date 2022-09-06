



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





void insertintoFront( int x)

{

    LNode* newl = new LNode();

    newl -> data = x;

    newl ->next = head;

    head= newl;

}





void Search(int val){

     LNode *np = head ;

     while(np != NULL){

        if(np->data == val){

            cout<<"Found\n" ;

            break ;

        }

        np = np->next ;

     }



}







void Insert(int x , int y)

{

    LNode *tmp = head ;

    LNode* newnode = new LNode ;

    newnode->data = y;

    while(tmp != NULL){

        if(tmp->data == x){

             newnode->next = tmp->next ;

             tmp->next = newnode ;

             break ;

        }

        tmp = tmp->next ;

    }



}





void deleteFirst(LNode *head)

{

    LNode* tmp = head;

    head = head ->next;

    delete tmp;



}



void deleteLast(LNode *head)

{ LNode* np =head;

    while(np->next->next!=NULL)

    {

        np=np->next;



    curr=np;

    delete (curr->next);

    }

    curr->next=NULL;

}


void Delete(int x)
{
    LNode *dmp = NULL;
   LNode *np = head;
    while(np->next->data !=x)
    {np=np->next;}
    dmp = np->next;
    np->next = np->next->next;
    delete(dmp);

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

            cout<<"Enter Data press 1"<<endl;

            cout<<"Enter Data in the front press 2"<<endl;

            cout<<"Display press 3"<<endl;

            cout<<"Search Data press 4"<<endl;

            cout<<"Enter Data anywhere press 5"<<endl;

            cout<<"Delete First element press 6"<<endl;

            cout<<"Delete Last element press 7"<<endl;
            cout<<"Delete Any element press 8"<<endl;

            cout<<"Enter to stop press 0"<<endl;

    cin>>n;

    if(n==1){

int Data;

cout<<"Enter Data : ";

cin>>Data;

Node_Create(Data);

cout<<endl<<"Enter 2nd Data : ";

cin>>Data;

Node_Create(Data);

cout<<endl<<"Enter 3rdData : ";

cin>>Data;

Node_Create(Data);

cout<<endl<<"Enter 4th Data : ";

cin>>Data;

Node_Create(Data);

cout<<endl<<"Enter 5th Data : ";

cin>>Data;

Node_Create(Data);

    }

    if(n==2){int l ;

            cout<<"Enter the data you want to enter in the front : "<<endl;

    cin>>l;

        insertintoFront(l);

    }

    if(n==3){

Display();

    }

    if(n==4){int g ;

            cout<<"Enter the data you want to search : "<<endl;

    cin>>g;

        Search(g);

    }

    if(n==5)

    {

        int o,p;

        cout<<"Where : "<<endl;

        cin>>o;

        cout<<"What : "<<endl;

        cin>>p;

        Insert(o,p);



    }

    if(n==6)

    {

        deleteFirst(head=head->next);

    }

    if(n==7)

    {

        deleteLast(head=head->next);

    }
    if (n==8)
    { int b;
        cout<<"Enter the element you want to delete : "<<endl;
        cin>>b;
        Delete(b);
    }

    }

while(n!=0);

    return 0;

}







