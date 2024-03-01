#include<iostream>
using namespace std;

class base
{
    private :
    int salary;
    public:
    int bonus,total;;
    void addsalary(int salary1)
    {
       salary=salary1;
    }

    void totsalary()
    {
        total=salary+bonus;
        
    cout<<"total salary :"<<total;
    }

};

class derive : public base{
    public:
    void addbonus(int bonus1)
    {
        bonus=bonus1;
    } 
};



int main()
{
    derive add;
    add.addsalary(1000);
    add.addbonus(5000);
    add.totsalary();

    return 0;

}