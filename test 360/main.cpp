#include <iostream>

using namespace std;

int main()
{
    int a= 10;
    int *x = &a;
    int *y = &a;
    int *z = &a;

    *x = *x +2;
    *y = *y -3;
    *z = 4 *++ *z;
    cout<<a;
    return 0;
}
