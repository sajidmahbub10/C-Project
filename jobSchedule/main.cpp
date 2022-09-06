#include <iostream>

using namespace std;

struct Job{
    char id;
    int deadline;
    int profit;
};

void swap(struct Job &a, struct Job &b){
    struct Job temp = a;
    a = b;
    b = temp;
}

bool compare(struct Job a, struct Job b){
    return (a.profit < b.profit);
}

void sortByProfit(struct Job a[], int n){
    for(int i=0; i<n; i++){
        int max = i;
        for(int j=i+1; j<n; j++){
            if(compare(a[max], a[j])){
                max = j;
            }
        }
        if(max != i){
            swap(a[max], a[i]);
        }
    }
}

void jobScheduling(struct Job a[], int n){
    int result[n];
    bool slot[n];

    for(int i=0; i<n; i++){
        slot[i] = false;
    }

    sortByProfit(a, n);

    for(int i=0; i<n; i++){
        for(int j=(min(n, a[i].deadline)-1); j>=0; j--){
            if(!slot[j]){
                slot[j] = true;
                result[j] = i;
                break;
            }
        }
    }

    cout<<"Job schedule : ";
    for(int i=0; i<n; i++){
        if(slot[i]){
            cout<<a[result[i]].id<<" ";
        }
    }
    cout<<endl;

}

int main(){
    int n = 5;
    struct Job jobs[n] = {
        {'a', 2, 100},
        {'b', 1, 19},
        {'c', 2, 27},
        {'d', 1, 25},
        {'e', 3, 15}
    };

    jobScheduling(jobs, n);
    return 0;
}
