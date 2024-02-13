#include<iostream>

using namespace std;

class romin
{

    int a,b;
    public:

    romin(int a1,int b1)
    {
            
        a=a1;
        b=b1;
    };

    romin(int c)
    {
        a=c;
        b=1;
    };

    void printdata()
    {
        cout<<"value a is :"<<a<<endl;
        cout<<"value b is :"<<b<<endl;

    }
};


int main()
{
    romin data1(30,40);
    data1.printdata();
    romin data2(100);
    data2.printdata();
}