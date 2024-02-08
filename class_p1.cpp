#include<iostream>
#include<string.h>

using namespace std;


class student
{
    private :
   int admno;
   char sname[20];
   float eng,math,sci;
   float total;
   
   float ctotal(int eng,int math,int sci);


    public:
    void takedata()
    {
        cout<<"Enter the admno : ";
        cin>>admno;
        cin.ignore();
        cout<<"Enter student name:";
        gets(sname);
        cout<<"Enter english marks : ";
        cin>>eng;
        cout<<"Enter Maths marks : ";
        cin>>math;
        cout<<"Enter Science marks : ";
        cin>>sci;

    }

    void showdata()
    {
        cout<<"Admission number is :"<<admno<<endl;
        cout<<"Student name is :"<<sname<<endl;
        cout<<"English Mark is :"<<eng<<endl;
        cout<<"Maths Mark is :"<<math<<endl;
        cout<<"Science Mark is :"<<sci<<endl;
        ctotal(eng,math,sci);
        cout<<"Total Mark is :"<<total<<endl;

    }

};

float student :: ctotal(int eng,int math,int sci)
{
    total=eng+math+sci;

    return total;
}

int main()
{
    student details;
    details.takedata();

    cout<<"------------------"<<endl;
    details.showdata();

    return 0;

}






// 1. Define a class student with the following specification

// Private members of class student

// admno                integer
// sname                20 character
// eng. math, science   float
// total                float
// ctotal()             a function to calculate eng + math + science with float return type.

// Public member function of class student

// Takedata()   Function to accept values for admno, sname, eng, science and invoke
// ctotal()     to calculate total.
// Showdata()   Function to display all the data members on the screen
