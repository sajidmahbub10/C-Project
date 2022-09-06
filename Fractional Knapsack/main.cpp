#include <iostream>

using namespace std;

struct itemInfo{
string name;
int weight;
int price;
float density;
};

void getIteminformation(itemInfo items[],int size);
void printItemList(itemInfo items[],int size);
void build_minheap(itemInfo items[],int size,int root);
void heap_sort(itemInfo items[],int size);
void knapsack(itemInfo items[],int size,int bag_size);

int main()
{
    int size;
    int knapsacksize;
    cout<<"Enter the size of your item list:";
    cin>>size;
    itemInfo items[size];
    getIteminformation(items,size);
    cout<<"\nEnter the Knapsack size:";
    cin>>knapsacksize;
    cout<<"\nInitial List"<<endl;
    printItemList(items,size);
    cout<<"\nList After Arranging"<<endl;
    heap_sort(items,size);
    printItemList(items,size);
    cout<<endl;
    cout<<"Calculations"<<endl;
    knapsack(items,size,knapsacksize);

    return 0;
}

void getIteminformation(itemInfo items[],int size){
    cout<<"Enter the inventory Details"<<endl;
    for(int i=0; i<size; i++){
        cout<<"Enter the name of item number "<<i+1<<":";
        cin>>items[i].name;
        cout<<"Enter the weight of item number "<<i+1<<":";
        cin>>items[i].weight;
        cout<<"Enter the price of item number "<<i+1<<":";
        cin>>items[i].price;
        items[i].density=float(items[i].price)/(items[i].weight);
    }
}

void printItemList(itemInfo items[],int size){
   cout<<"Name "<<" Weight "<<"  Price "<<" Density"<<endl;
   for(int i=0; i<size; i++){
   cout<<items[i].name<<"\t "<<items[i].weight<<"\t "<<items[i].price<<"\t "<<items[i].density<<endl;
   }
}

void build_minheap(itemInfo items[],int size,int root){
    itemInfo temp;
    int parent=root;
    int leftchild=2*root+1;
    int rightchild=2*root+2;
    if(leftchild<size && items[parent].density>items[leftchild].density){
        parent=leftchild;
    }
    if(rightchild<size && items[parent].density>items[rightchild].density){
        parent=rightchild;
    }
    if(parent!=root){
        temp=items[parent];
        items[parent]=items[root];
        items[root]=temp;
        build_minheap(items,size,parent);
    }
}

void heap_sort(itemInfo items[],int size){
    itemInfo temp;
    for(int i=(size/2)-1; i>=0; i--){
        build_minheap(items,size,i);
    }
    for(int i=size-1; i>=0; i--){
        temp=items[0];
        items[0]=items[i];
        items[i]=temp;
        build_minheap(items,i,0);
    }
}

void knapsack(itemInfo items[],int size,int bag_size){
    float total_weight=0;
    float extra_value;
    int extra_Weight;
    float max_benefit=0;
    for(int i=0; i<size; i++){
        if(items[i].weight+total_weight<=bag_size){
            total_weight=total_weight+items[i].weight;
            max_benefit=max_benefit+items[i].price;
            cout<<"Name "<<" Weight "<<"  Price "<<" Max Benefit"<<endl;
            cout<<items[i].name<<"\t "<<items[i].weight<<"\t "<<items[i].price<<"\t "<<max_benefit<<endl;
        }
        else{
            extra_Weight=bag_size-total_weight;
            extra_value=extra_Weight*(float(items[i].price)/(items[i].weight));
            total_weight=total_weight+extra_Weight;
            max_benefit=max_benefit+extra_value;
               cout<<"Name "<<" Weight "<<"  Price "<<" Density"<<endl;
               cout<<items[i].name<<"\t "<<extra_Weight<<"\t "<<extra_value<<"\t "<<max_benefit<<endl;
               break;
        }
    }
    cout<<"\nTotal Weight in the Bag:"<<total_weight<<endl;
    cout<<"Maximum Benefit:"<<max_benefit;
}
