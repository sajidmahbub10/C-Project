
#include <iostream>

using namespace std;

struct Node
{
    struct Node *prev;
    int data;

struct Node *next;
};
struct Node *head = NULL, *tail = NULL;

void createNode(int x){

struct Node *np = new Node;
np->data = x;
np->prev = NULL;
np->next =NULL;

if (head==NULL)
{
    head =np;
    tail=np;
}
else{
    tail->next =np;
    tail=tail->next;
}




}

void insertintoFront( int x)
{
    Node *np = new Node;
    np->data = x;
    np->next = head;
    np->prev = NULL;
    head -> prev=np;
    head =np;
}

void insertAnywhere(int x, int y)
{   Node *ptr = head;
    Node *np =new Node;
    np->data = y;
     while(ptr != NULL){

        if(ptr->data == x){
np->next =ptr->next;
np->prev = ptr;
ptr->next -> prev =np;
ptr->next =np;


        }
        ptr = ptr->next ;
}
}


void deleteLast()
{
    tail = tail->prev;
    delete(tail->next);
    tail->next = NULL;
}

void deleteFirst()
{
    head = head->next;
    delete(head->prev);
    head -> prev = NULL;
}

void deleteAnywhere(int x)
{
    Node *ptr = head;
    while(ptr->data!= x)
    {
        ptr=ptr->next;
        }

        ptr->prev->next = ptr->next;
        ptr->next->prev = ptr->prev;
        delete(ptr);


}


void Display()
{
    Node *np = head;

     while(np !=NULL){

     cout<<np->data<<" ";

     cout<<endl;

     np=  np-> next;}
}

int main()
{
    Display();



    int n;

    do{

            cout<<"Enter Data press 1"<<endl;

            cout<<"Enter Data in the front press 2"<<endl;

            cout<<"Display press 3"<<endl;



            cout<<"Enter Data anywhere press 4"<<endl;
            cout<<"Delete Last Data press 5"<<endl;
            cout<<"Delete First Data press 6"<<endl;
            cout<<"Delete Data from Anywhere press 7"<<endl;



            cout<<"Enter to stop press 0"<<endl;

    cin>>n;

    if(n==1){

int a,b;
    cout << "HOW MANY DATA : " << endl;
    cin>>a;
    for(int i=0; i<a;i++)
    { cout<<"Data "<<i+1<<endl;
        cin>>b;
        createNode(b);
    }

    }

    if(n==2){int l ;

            cout<<"Enter the data you want to enter in the front : "<<endl;

    cin>>l;

        insertintoFront(l);

    }

    if(n==3){

Display();

    }
    if(n==4)
    {
         int o,p;

        cout<<"Where : "<<endl;

        cin>>o;

        cout<<"What : "<<endl;

        cin>>p;

        insertAnywhere(o,p);
    }
    if(n==5)
    {
        deleteLast();
    }if(n==6)
    {
        deleteFirst();
    }
    if(n==7)
    {
        int b;
        cout<<"Enter the element you want to delete : "<<endl;
        cin>>b;
        deleteAnywhere(b);
    }



    }

while(n!=0);

    return 0;




    return 0;
}

