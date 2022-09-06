#include <iostream>
#include <string>
using namespace std;
int length(string a)
{
  int x =0;
  for(int i =0;;i++)
  {
      if(a[i]=='\0')
      {
          break;
      }
      else{
        x++;
      }
  }
  return x;
}
int main()
{
    string s;
    cout<<"Enter Your Name : ";
    getline(cin,s);
    int x = length(s);
    cout<<"Length of your name : "<<x<<endl;

    return 0;
}
