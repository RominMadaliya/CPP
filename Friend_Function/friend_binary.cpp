#include<iostream>
using namespace std;

class num
{
    int a,b;

    friend num number(num t1,num t2);
    public:

    void number(int x,int y)
    {
        a=x;
        b=y;
    }

    void printdata()
    {
        cout<<"Your number is:"<<a<<"+"<<b<<endl;
    }

};

num number(num t1,num t2)
{
    num t3;

    t3.number((t1.a+t2.a),(t1.b+t2.b));
    return t3;
}


int main(){


        num n1,n2,sum;
        n1.number(1,4);
        n1.printdata();

        n2.number(4,8);
        n2.printdata();

        sum=number(n1,n2);
        sum.printdata();
    return 0;
}