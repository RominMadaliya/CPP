#include <iostream>

using namespace std;

class name
{
private:
    int a, b;

    void getvalues(int a1, int a2);

public:
    int c, d;
    void print(int h, int v)
    {
        getvalues(h, v);
    }
    void print1()
{
    cout << "Value is a:" << a << endl;
    cout << "Value is b:" << b << endl;
}

};


void name::getvalues(int a1, int a2)
{
    a = a1;
    b = a2;
}

int main(void)
{

    name details;
    details.print(68,49);
    details.print1();
    details.c=55;
    cout << "c is "<<details.c;
}