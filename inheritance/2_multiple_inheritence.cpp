#include<iostream>

using namespace std;

class base1
{
    protected:
    int a;
    public:
    void setdata(int x)
    {
        a=x;
    }
};

class base2
{
    protected:
    int b;
    public:
    void setdata1(int y)
    {
        b=y;
    }
};

class derive : public base1,public base2{

    public:
    void show()
    {
        cout << "The value of a is "<<a<<endl;
        cout<<"The value fo 2 is "<<b<<endl;
        cout<<"The sum of two number is "<<a+b<<endl;

    }
};

int main()
{
    derive obj;
    obj.setdata1(20);
    obj.setdata(40);
    obj.show();
    return 0;

}

