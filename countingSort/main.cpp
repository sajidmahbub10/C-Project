#include<iostream>
#include<algorithm>
using namespace std;

void display(int *a, int n) {
   for(int i = 1; i<=n; i++)
      cout << a[i] << " ";
   cout << endl;
}
int getMax(int a[], int n) {
   int k = a[1];
   for(int i = 2; i<=n; i++) {
      if(a[i] > k)
         k = a[i];
   }
   return k;
}
void countSort(int *a, int n) {
   int b[n+1];
   int k = getMax(a, n);
   int c[k+1];
   for(int i = 0; i<=k; i++)
      c[i] = 0;
   for(int i = 1; i <=n; i++)
      c[a[i]]++;
   for(int i = 1; i<=k; i++)
      c[i] += c[i-1];
   for(int i = n; i>=1; i--) {
      b[c[a[i]]] = a[i];
      c[a[i]] -= 1;
   }
   for(int i = 1; i<=n; i++) {
      a[i] = b[i];
   }
}
int main() {
   int n;
    int a[100];
   cout << "Enter the number of elements: ";
   cin >> n;

   cout << "Enter elements:" << endl;
   for(int i = 1; i<=n; i++) {
      cin >> a[i];
   }

   countSort(a, n);
   cout << "Sorted Array : ";
   display(a, n);
}
