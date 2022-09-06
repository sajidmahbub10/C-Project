#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < 5; i++)
		if (arr[i] == x)
			return i;
	return -1;
}


int main(void)
{
	int arr[100] ;
	int n;
	int x ;
	cout<<"Enter The Size of the array : "<<endl;
	cin>>n;
	cout<<"Enter The Elements of the Array : "<<endl;
	for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
		cout<<"Enter The Element you want to search : "<<endl;
		cin>>x;



	int result = search(arr, n, x);
	if(result == -1){
		 cout << "Element Not Found"<<endl;
		}
		else{
            cout << "Element Found" << endl;
		}
	return 0;
}
