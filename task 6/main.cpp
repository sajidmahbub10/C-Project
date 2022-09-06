





#include <iostream>

using namespace std;

struct Node
{
    struct Node *prev;
    int data;

struct Node *next;
};
struct Node *head = NULL, *tail = NULL, *curr =NULL;

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
curr=tail;


}












void Display()
{
    cout<<ptr->prev->next->Data;
}

int main()
{
    while(np->next->next!=NULL)

    {

        np=np->next;



    curr=np;



    }

   createNode(200);
   createNode(700);
   createNode(800);
   createNode(900);

   Display();


    return 0;
}


