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

    int operator+(add n2)
    {
        add A;
        if(a==n2.a&&b==n2.b)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
       
    }  
    void print()
    {
        cout<<"The value of a is :"<<a<<endl;
        cout<<"The value of b is :"<<b<<endl;
    }  
    
};

int main()
{
    add n1(45,54),n2(45,54),n3;
    int ans;
   
     ans= n1+n2;
   
    cout<<ans;
    

    


    return 0;
}

