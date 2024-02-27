#include<iostream>

using namespace std;

class num
{
    int a,b;

    public:
    
    num()
    {

    };

    num(int x,int y)
    {
        a=x;
        b=y;
    }

    num operator-()
    {
        a=a+(a*2);
        b=b+(b*2);
    }

    void print()
    {
    cout<<"The value of a is:"<<a<<endl;
    cout<<"The value of b is:"<<b<<endl;
    }

};

int main()
    {
        num n1(10,20),n2(30,40);
        -n1;
        n1.print();
        -n2;
        n2.print();


    return 0;
            
    }
