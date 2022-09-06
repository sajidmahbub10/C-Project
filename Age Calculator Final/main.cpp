#include <iostream>

using namespace std;

class Age
{
public:
    char gender;
    int birthmonth, birthyear, birthdate;
    int currentmonth, currentyear, currentdate;
    int d, y, m;
    static  int counter;
    Age()
    {
        cout << "Default constructor called" << endl;

    }

    ~Age() {
        cout << "Default Destructor Called" << endl;
    }
};
class Agecalculator : public Age {
public:
    Agecalculator(char gd, int bm, int by, int bd, int cm, int cy, int cd)
    {
        gender = gd;
        birthmonth = bm;
        birthyear = by;
        birthdate = bd;
        currentmonth = cm;
        currentyear = cy;
        currentdate = cd;


    }
    int getAge()
    {
        if (currentdate > birthdate) {
            d = currentdate - birthdate;
            if (currentmonth > birthmonth) {
                m = currentmonth - birthmonth;
                y = currentyear - birthyear;
            }
            else {
                m = currentmonth + 12 - birthmonth;
                y = currentyear - 1 - birthyear;
            }
        }
        else
        {
            d = currentdate + 30 - birthdate;
            if (currentmonth > birthmonth)
            {
                m = currentmonth - 1 - birthmonth;
                y = currentyear - birthyear;
            }
            else {
                m = currentmonth + 11 - birthmonth;
                y = currentyear - 1 - birthyear;
            }
        }
        {cout << "Your age is = " << y << " Years " << "  " << m << " Months " << "  " << d << " Days " << endl;

        if (
            (int)gender == 102) {
            if (y >= 18) { cout << "According to the constitution of Bangladesh, you are free to get married " << endl; }
            else { cout << "You still need to wait " << 30 - d << " days " << 11 - m << " months " << 17 - y << " years before you can get married "; }
        }
        else {
            if (y >= 21) {
                cout << "According to the constitution of Bangladesh, you are free to get married " << endl;
            }
            else {
                cout << "You still need to wait " << 30 - d << " days " << 11 - m << " months " << 20 - y << " years before you can get married ";
            }
        }
        }



        return 0;
    }

    int getCounter();
};


int Age::counter = 0;



int Agecalculator::getCounter()

{
    for (int k = birthyear; k < currentyear; k++)
    {
        if (k % 4 == 0)
        {
            counter++;

        }

    }

    cout << "Leap Years you have seen in your life = " << counter << endl;

    return counter;
}


int main()

{
    int l, m, n, p, q, r;
    char g;

    cout << "Welcome to the Age calculator that also gives you information about your legality to marriage" << endl;

    cout << "Enter your gender  ('m' or 'f') " << endl;
    cin >> g;
    cout << "Enter your birth year = ";
    cin >> m;
    cout << "Enter your birth month = ";
    cin >> l;
    cout << "Enter your birth date = ";
    cin >> n;

    cout << "Enter current year = ";
    cin >> q;
    cout << "Enter current month = ";
    cin >> p;
    cout << "Enter current date = ";
    cin >> r;
    Age jojo();

    Agecalculator dio(g, l, m, n, p, q, r);

    dio.getAge();

    dio.getCounter();
 system("pause");
    return main();


}
