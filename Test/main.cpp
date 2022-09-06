
#include <iostream>

#include<cstring>

   using namespace std;

struct Student
{
    string name;
    int id;
    float cgpa;
    int age;
};

void print()
{
    for (int i = 0; i<3; i++)
{
cout<<"Student Number"<<i+1<<endl;
cout<<"Name : "<<s[i].name<<endl;
cout<<"ID : "<<s[i].id<<endl;
cout<<"CGPA : "<<s[i].cgpa<<endl;
cout<<"AGE : "<<s[i].age<<endl;
}
}


   int main ()

   {
       Student s[3];
for (int i = 0; i<3; i++)
{
    cout<<"Student Number"<<i+1<<endl;
    cout<<"Student Name :"<<endl;
    getline(cin,s[i].name);
    cout<<"Enter ID :"<<endl;
    cin>>s[i].id;
    cout<<"Enter cgpa :"<<endl;
    cin>>s[i].cgpa;
     cout<<"Enter age :"<<endl;
    cin>>s[i].age;
cout<<endl;
}

print
return 0;
   }









