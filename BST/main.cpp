
#include <iostream>
using namespace std;


struct node
{
	int data;
	node *left;
	node *right;
};

node* CreateNode(int data)
{
	node *newnode = new node;
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;

	return newnode;
}


node* InsertIntoTree(node* root, int data)
{

	node *temp = CreateNode(data);
	node *t = new node;
	t = root;


	if(root == NULL)
		root = temp;
	else
	{

		while(t != NULL)
		{
			if(t->data < data )
			{
				if(t->right == NULL)
				{

					t->right = temp;
					break;
				}

				t = t->right;
			}

			else if(t->data > data)
			{
				if(t->left == NULL)
				{

					t->left = temp;
					break;
				}

				t = t->left;
			}
		}
	}
	return root;
}








void inorder(node *p)
{
    if (p != NULL)
    {
        inorder(p->left);
        cout<<p->data<<endl;
        inorder(p->right);
    }
}







struct LNode{

int data;

struct LNode *next;};



struct LNode *head = NULL, *curr = NULL;


int arr[100];
static int c =0;



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



void Search(int val){

     LNode *np = head ;

     while(np != NULL){

        if(np->data == val){

            cout<<"Found\n" ;

            break ;

        }
        else{cout<<"Not Found"<<endl;}

        np = np->next ;

     }
}












void searchBST(node *root, int data)
{
	int depth = 0;
	node *temp = new node;
	temp = root;

	while(temp != NULL)
	{
		depth++;
		if(temp->data == data)
		{
			cout<<"\nData found at depth: "<<depth;
			return;
		}

		else if(temp->data > data)
			temp = temp->left;

		else
			temp = temp->right;
	}

	cout<<"\n Data not found";
	return;
}







void bS(int *arr, int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void pA(int *arr, int n)
{
    int i;
    cout<<"Sorted Array"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
        cout<<endl;
    }
}





int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;


		if (arr[mid] == x)
			return mid;


		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);


		return binarySearch(arr, mid + 1, r, x);
	}


	return -1;
}






int main()
{
node *root = new node;
	root = NULL;
       int arr[100] ;
    int n,a ;

     do{
                 cout<<"Choose an option"<<endl;
                 cout<<"Press 1 For Input"<<endl;
                 cout<<"Press 2 to Construct BST"<<endl;
                 cout<<"Press 3 to Apply Bubble Sort"<<endl;
                 cout<<"Press 4 to Print The Numbers"<<endl;
                 cout<<"Press 5 to Apply Binary Search"<<endl;
                 cout<<"Press 6 to Construct A Linked List"<<endl;
                 cout<<"Press 7 to Search Element In Linked List"<<endl;
                 cout<<"Press 8 to Search Element in BST"<<endl;

     cin>>a;
            if(a==1)
                {
    cout<<"Enter the number of elements you want to Enter : "<<endl;
    cin>>n;
    for(int i =0; i<n; i++)
{
    cin>>arr[i];
}
            }
if(a==2){
    for(int i = 0; i < n; i++)
		root = InsertIntoTree(root, arr[i]);
    cout << "Inorder Traversal of constructed BST \n";
    inorder(root);
}
if(a==3){
 bS(arr,n);
pA(arr,n);
}
if(a==4)
{
  pA(arr,n);
}
if(a==5)
{int k;
    cout<<"Enter the Number you want to search : ";
    cin>>k;

    int result = binarySearch(arr, 0, n - 1, k);
	if(result == -1){
		 cout << "Element Not Found"<<endl;
		}
		else{
            cout << "Element Found" << endl;
		}
}
if(a==6){
		for(int i =0;i<7;i++)
        {
            Node_Create(arr[i]);
        }
}
if(a==7){int l;
        cout<<"Enter the element you want to search : ";
cin>>l;
         Search(l);
}
if(a==8)
{ int l;
    cout<<"Enter the element you want to search : ";
cin>>l;

searchBST(root,l);
}
     }while(a!=0);

	return 0;

}
