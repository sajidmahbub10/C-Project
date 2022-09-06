#include <iostream>

using namespace std;

int main()
{
    int num;
    static int result =1 ;

    bool isPrime = true;
    cout <<"Enter the Number = ";
    cin>>num;
    if (num == 0 || num == 1)
    {
        cout<<"Error! Not Prime Number"<<endl;

    }
    else{
        for (int i = 2; i < num; i++){
        if(num % i == 0){
            isPrime = false;

            cout<<"Error! Not Prime Number"<<endl;
            break;
            }
        }

    }
    if (isPrime == true)
    {
       for(int k = num; k>=1; k--)
       {
            result = result * k;
       }
       cout<<result<<endl;
    }
    return 0;
}
