#include<iostream>

using namespace std;

class add
{

    int a,b;

    public:
    add()
    {};
    add(int x,int y)
    {
        a=x;
        b=y;
    }

    add operator+(add n2)
    {
        add A;
        A.a=a+n2.a;
        A.b=b+n2.b;
        return A;
    }  
    void print()
    {
        cout<<"The value of a is :"<<a<<endl;
        cout<<"The value of b is :"<<b<<endl;
    }  
    
};

int main()
{
    add n1(45,58),n2(85,54),n3;
    add ans;
   
     ans= n1+n2;
   
    ans.print();
    

    


    return 0;
}