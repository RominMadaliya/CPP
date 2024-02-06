#include<iostream>

using namespace std;
int main()
{
    cout<<"Enter two value and find smalles enter 1"<<endl;
    cout<<"Enter one value find its positive, negative or zero enter 2"<<endl;
    cout<<"Enter one value and find its divisible by 5 and 3 or not enter 3"<<endl;
    cout<<"Enter Students marks and check uts pass or not enter 4"<< endl;
    cout<<"Enter Year and find its leap year or not enter 5"<<endl;
    cout<<"Enetr a,b,c find largest among them enter 6"<<endl;

    int n;

    cout<<"Enter Your choice:";
    cin>>n;

    while(n<1||n>6)
    {
        cout<<"Invalid Input"<<endl;
    }

    if(n==1)
    {
        int a,b;
        cout<<"Enter the value of a:";
        cin>>a;
    
        cout<<"Enter the value of b:";
        cin>>b;
        if(a<b)
        {
            cout<<"a is small";
        }
        else if(b<a){
            cout<<"b is small";
        }
        else
        {
            cout<<"Both are same";
        }
    }
    else if(n==2)
    {
        int n;
        cout<< "Entyer The Number :";
        cin>>n;
        if(n<0)
        {
            cout<<"The given Number is Negative";
        }
        else if(n>0)
        {
            cout << "The Given Number is Positive";
        }
        else
        {
            cout<<"The Given Number is Zero";
        }

    }
    else if(n==3)
    {
        int n;
        cout<< "Entyer The Number :";
        cin>>n;
        if(n%5==0 && n%3==0)
        {
            cout<<"The Given number is Divisible by 5 and 3";
        }
        else
        {
            cout<<"The Given number is not Divisible by 5 and 3 ";
        }
    }
    else if(n==4)
    {
        int n;
        cout<< "Entyer Studewnt marks :";
        cin>>n;
        if(n>=35)
        {
            cout<<"Student is pass"; 
        }
        else{
             cout<<"Student is fail"; 
        }
    }
    else if(n==5)
    {
        int year;
        cout<< "Entyer year :";
        cin>>year;
        if(year%4==0 && year%100 !=0 || year%400==0)
        {
            cout<<"The given year is leap year";            
        }
        else{
            cout<<"The given year is not leap year";   
        }
    }
    else if(n==6)
    {
        int a,b,c;

        cout<<"Enter the value of a:";
        cin>>a;
    
        cout<<"Enter the value of b:";
        cin>>b;

        cout<<"Enter the value of c:";
        cin>>c;

        if(a>b)
        {
            if(a>c)
            {
                cout<<"a is gratest";
            }
            else
            {
                cout<<"c is gratest";
            }
        }
        else
            {
                if(b>c)
                {
                    cout<<"b is gratest";
                }
                else
                {
                    cout<<"c is gratest";
                }
            }
    }
}