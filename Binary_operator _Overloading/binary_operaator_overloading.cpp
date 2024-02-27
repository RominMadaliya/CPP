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

    add sum(add n1,add n2)
    {
        add res;
        res.a=n1.a+n2.a;
        res.b=n1.b+n2.b;
        return res;
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
   
     ans= n3.sum(n1,n2);
   
    ans.print();
    

    


    return 0;
}