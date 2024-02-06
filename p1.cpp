#include<iostream>
using namespace std;
int main()
{
    
 
    cout<<"dol->rupee ENTER 1"<<endl;
    cout<<"feet->inches ENTER 2"<<endl;
    cout<<"inch->cemi ENTER 3"<<endl;
    cout<<"celsius->fahrenheit ENTER 4"<<endl;
    int n;
    do
    {
        cout<<"Enter Your Choice :";
        cin>>n;
         if (n <1 || n > 5)
         {
            cout<<"Invalid Input"<<endl;
         }
    }while(n < 1 || n > 5);

    if(n==1)
    {
    int dol,rupee;
    cout << "Enter the doller amount :";
    cin>> dol;
    rupee=dol*82;
    cout<<"The doller into rupees is :"<<rupee; 
    }
    else if(n==2)
    {
        int feet,inch;
        cout<<"Enter the feet:";
        cin>>feet;
        inch=feet*12;
        cout<<"Feet into inch is :"<<inch;
    }
     else if(n==3)
    {
        int inch,cel;
        cout<<"Enter the inch:";
        cin>>inch;
        cel=inch*12;
        cout<<"Feet into inch is :"<<cel;
    }
     else if(n==4)
    {
        int cel,fer;
        cout<<"Enter the celsius:";
        cin>>cel;
        fer=(cel*1.8)+32;
        cout<<"celsius into fernheit is :"<<fer;
    }

}