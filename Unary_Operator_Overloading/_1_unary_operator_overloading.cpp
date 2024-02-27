#include<iostream>

using namespace std;

class rom
{
    int a,b;

    public:

    rom(){};

    rom(int a1,int b1)
    {
        a=a1;
        b=b1;
    }

    rom operator --(int)
    {
        --a;
        --b;
          cout<<a<<endl;
          cout<<b<<endl;
    }

    rom operator -()
    {
        a--;
        b--;
          cout<<a<<endl;
          cout<<b<<endl;
    }


};

int main()
{
    rom a(3,4);
   
    a--;
    -a;


  
    return 0;
}