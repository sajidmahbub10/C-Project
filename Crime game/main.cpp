#include<process.h>
#include<conio.h>

#include<stdio.h>
#include<string.h>
class crim_rec
{
    char name[20], sex, father_name[20], address[25], offense[100], blood[5], dob[9];
    int crime_code, reward;
    void disp();
public:
    void get();
    void wtf();
    void rff();
    void search();
    void crimcoder(int t)
    {  crime_code=t+1; }
    void del();
    void mod();
}c;
void crim_rec::get()
{
    cout<<"\nEnter name of criminal:";
    gets(name);
    cout<<"\nsex (m/f):";
    cin>>sex;
    cout<<"\nEnter date of birth:";
    gets(dob);
    cout<<"Enter blood group (Ap/An/Bp/Bn/ABp/ABn/Op/On/A1Bp/A2Bp):";
    gets(blood);
    cout<<"\nenter father's name:";
    gets(father_name);
    cout<<"enter address:";
    gets(address);
    cout<<"\nEnter crime commited:";
    gets(offense);
    cout<<"\nEnter reward on criminal:";
    cin>>reward;
}
void crim_rec::disp()
{
    cout<<"\nThe record of criminal:\n";
    cout<<"\nCriminal Number: "<<crime_code;
    cout<<"\nName of criminal: "<<name;
    cout<<"\nsex: "<<sex;
    cout<<"\nDOB: "<<dob;
    cout<<"\nBlood Group: "<<blood;
    cout<<"\nFather's name: "<<father_name;
    cout<<"\nAddress: "<<address;
    cout<<"\nCrime: "<<offense;
    cout<<"\nReward: "<<reward;
}
void crim_rec::wtf()
{
    ofstream ofile;
    ofile.open("CASE", ios::app);
    get();
    ifstream tefile("CASE",ios::ate);
    crim_rec te;
    tefile.seekg(tefile.tellg()-sizeof(te));
    if(tefile.eof()){crime_code=1;}
    else
    {
    tefile.read((char*)&te, sizeof(te));
    c.crimcoder(te.crime_code);
    }
    tefile.close();
    ofile.write((char*)&c, sizeof(c));
    ofile.close();
}
void crim_rec::rff()
{
    ifstream ifile;
    ifile.open("CASE");
    ifile.seekg(0, ios::beg);
    ifile.read((char*)&c, sizeof(c));
    while(ifile)
    {
	disp();
	ifile.read ((char*)&c, sizeof(c));
    }
    ifile.close();
}
void crim_rec::search()
{
    int m;
    ifstream ifile("CASE");
    cout<<"Enter the criminal no of criminal which has to be searched";
    cin>>m;
    ifile.seekg (0, ios::beg);
    ifile.read((char*)&c, sizeof(c));
    while(ifile)
    {
	if (m==c.crime_code)
	    disp();
	    ifile.read((char*)&c, sizeof(c));
    }
    ifile.close();
}
void crim_rec::del()
{
    int b;
    ifstream ifile;
    ifile.open("CASE");
    ofstream ofile;
    ofile.open("new");
    cout<<"Enter the criminal no of the criminal whose records you want to del";
    cin>>b;
    ifile.seekg(0,ios::beg);
    ofile.seekp(0,ios::beg);
    while(ifile.read((char*)&c,sizeof(c)));
    {
	if(!(b==c.crime_code))
	{
	    ofile.write((char*)&c, sizeof(c));
	}
    }
    ifile.close();
    ofile.close();
    remove ("CASE");
    rename("new", "CASE");
}
void crim_rec::mod()
{
    int d;
    int p;
    cout<<"\nEnter criminal no of criminal whose record you want to modify\n";
    cin>>d;
    fstream f;
    f.open("CASE", ios::in|ios::out);
    f.seekg(0, ios::beg);
    f.read((char*)&c, sizeof(c));
    int a=f.tellg();
    while(! f.eof())
    {
	if (d==c.crime_code)
	{
	    cout<<"\nPress 1 to change name\nPress 2 to change sex\nPress 3 to change date of birth\nPress 4 to change blood group\nPress 5 to change father's name\nPress 6 to change address\nPress 7 to change crime committed\nPress 8 to change reward on criminal\n";
	    cin>>p;
	    switch(p)
	    {
	    case 1:
		gets(name);
		break;
	    case 2:
		cin>>sex;
		break;
	    case 3:
		gets(dob);
		break;
	    case 4:
		gets(blood);
		break;
	    case 5:
		gets(father_name);
		break;
	    case 6:
		gets(address);
		break;
	    case 7:
		gets(offense);
		break;
	    case 8:
		cin>>reward;
		break;
	    }
	    f.seekg(a-sizeof(c), ios::beg);
	    f.write((char*)&c, sizeof(c));
	}
	f.read((char*)&c, sizeof(c));
	a=f.tellg();
    }
    f.close();
}
void main ()
{
    clrscr();
    int ch;
    char choice;
    do
    {
    cout<<"\t\t\t FIRST INFORMATION REPORT";
    cout<<"\n\t\t ********************************************";
    cout<<"\n\n\t\t *  1. View criminal details                *";
    cout<<"\n\n\t\t *  2. Add new criminal details             *";
    cout<<"\n\n\t\t *  3. Search a criminal record             *";
    cout<<"\n\n\t\t *  4. Delete a criminal record             *";
    cout<<"\n\n\t\t *  5. Modify a criminal record             *";
    cout<<"\n\n\t\t *  6. To exit                              *";
    cout<<"\n\t\t ********************************************";
    cout<<"\n\n\t\t Enter your choice: ";
    cin>>ch;
    switch(ch)
    {
    case 1:
	c.rff();
	break;
    case 2:
	c.wtf();
	break;
    case 3:
	c.search();
	break;
    case 4:
	c.del();
	break;
    case 5:
	c.mod();
	break;
    case 6:
	exit(0);
    default:
	{
	cout<<"\nerror!";
	}
    }
    cout<<"\ncontinue? (y/n)\n";
    cin>>choice;
    }while(choice=='y'||choice=='Y');
    cout<<"\nGood bye";
 getch();
}
