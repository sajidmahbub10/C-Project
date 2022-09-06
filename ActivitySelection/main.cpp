#include <iostream>

using namespace std;

struct Activity{
    char a;
    int start;
    int finish;
};

void swap(struct Activity &a, struct Activity &b){
    struct Activity temp = a;
    a = b;
    b = temp;
}

bool compare(struct Activity a, struct Activity b){
    return (a.finish > b.finish);
}

void sortByfinish(struct Activity a[], int n){
    for(int i=0; i<n; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(compare(a[min], a[j])){
                min = j;
            }
        }
        if(min != i){
            swap(a[min], a[i]);
        }
    }
}

void ActivityScheduling(struct Activity a[], int n){

    sortByfinish(a, n);
    int activityCount = 1, i=0;

    cout<<"Activity: "<<a[i].a;

    for(int j=i+1; j<n; j++){
        if(a[i].finish < a[j].start){
            cout<<" "<<a[j].a;
            activityCount++;
            i = j;
        }
    }
    cout<<endl<<"Total activity: "<<activityCount<<endl;

}

int main(){
    int n = 6;
    struct Activity Activitys[n] = {
        {'a', 1, 2},
        {'b', 3, 4},
        {'c', 0, 6},
        {'d', 5, 7},
        {'e', 8, 9},
        {'f', 5, 9}
    };

    ActivityScheduling(Activitys, n);
    return 0;
}
