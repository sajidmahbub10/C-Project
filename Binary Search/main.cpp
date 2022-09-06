#include <iostream>
using namespace std;


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

	int result = binarySearch(arr, 0, n - 1, x);
	if(result == -1){
		 cout << "Element Not Found"<<endl;
		}
		else{
            cout << "Element Found" << endl;
		}

	return 0;
}
