#include<iostream>
using namespace std;

class num

{
    int a,b;
    public:
    void adddata()
    {
        cout<<"add a data :";
        cin>>a;
        cout<<"add b data :";
        cin>>b;
    }

    void printdata()
    {
        cout <<"The value of a is :"<<a;
        cout <<"The value of b is :"<<b;
    }
};

int main()
{
    num a1[3];
    for(int i=0;i<3;i++)
    {
        a1[i].adddata();
    }
    for(int i=0;i<3;i++)
    {
        a1[i].printdata();
    }
    return 0;
}