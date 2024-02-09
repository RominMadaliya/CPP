// 4. Define a class in C++ with following description:
// Private Members
// A data member Flight number of type integer
// A data member Destination of type string
// A data member Distance of type float
// A data member Fuel of type float
// A member function CALFUEL() to calculate the value of Fuel as per the following criteria
// Distance Fuel
// <=1000 500
// more than 1000 and <=2000 1100
// more than 2000 2200
// Public Members
// A function FEEDINFO() to allow user to enter values for Flight Number, Destination,Distance & call function CALFUEL() to calculate the quantity of Fuel
// A function SHOWINFO() to allow user to view the content of all the data members

#include<iostream>

using  namespace std;

class FLIGHT
{
    private:
    int fno;
    string destination;
    float distance,fuel;

    int calfuel(int distance)
    {
        if(distance<=1000)
        {
            fuel=500;
        }
        else if(distance>1000 && distance<=2000)
        {
            fuel =1100;
        }
        else if (distance>2000)
        {
            fuel=2200;
        }
    }


    public:
    void feedinfo()
    {
        cout<<"Enter the flight number :";
        cin>>fno;
        cin.ignore();
        cout<<"Enter the destination :";
        getline(cin,destination);
        cout<<"Enter the distance :";
        cin>>distance;

       calfuel(distance);
    }

    void showinfo()
    {
        cout<<"Your flight number is :"<<fno<<endl;
        cout<<"Your destination is :"<<destination<<endl;
        cout<<"Your distance is :"<<distance<<endl;
        cout<<"Your reqired fuel is :"<<fuel<<endl;
    
    }


};

int main()
{

    FLIGHT data;
    data.feedinfo();
    cout<<"---------------------"<<endl;
    data.showinfo();
    return 0;
}