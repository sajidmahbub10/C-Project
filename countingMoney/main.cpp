#include <iostream>
#include <stack>

using namespace std;

void noteCount(stack<int> notes){
    int k = 0, n = notes.size(), count;
    int a[n];


    while (!notes.empty())
    {
        a[k] = notes.top();
        k++;
        notes.pop();
    }


    for(int i=0; i<n; i++){
        count = 1;
        if(a[i] == -1){
            continue;
        }else{
            for(int j=i+1; j<n; j++){
                if(a[i] == a[j]){
                    count++;
                    a[j] = -1;
                }
            }
        }
        cout<<a[i]<<" - "<<count<<endl;
    }

}

void minCount(int money){
    int n = 3;
    stack<int> result;
    int wallet[n] = {1000, 500,100};

    for(int i=0; i<n; i++){
        while (money >= wallet[i]){
            result.push(wallet[i]);
            money -= wallet[i];
        }
    }

    cout<<"Total number of notes: "<<result.size()<<endl;

    noteCount(result);
}

int main(){
    int x = 1700;
    minCount(x);
    return 0;
}
