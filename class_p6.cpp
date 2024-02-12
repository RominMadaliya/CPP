// 6. Define a class REPORT with the following specification:
// Private members :
// adno 4 digit admission number
// name 20 characters
// 
// marks an array of 5 floating point values
// average average marks obtained
// GETAVG() a function to compute the average obtained in five subject
// Public members:
// READINFO() function to accept values for adno, name, marks. Invoke the function
// GETAVG()
// DISPLAYINFO() function to display all data members of a report on the screen.
// You should give function definitions.


#include<iostream>
using namespace std;
class REPORT
{
     int adno;
     char name[20];
     
     float marks[5];
     float avarge;
     float total=0;
     float getavg(float sub[])
     {
       // float total=0;
        for(int i=0;i<5;i++)
        {
         total+=marks[i];
        }
         avarge=total/5;
         return avarge;
     }

     public:

     void readinfo()
     {
      cout<<"Enetr the addmission no :";
      cin>>adno;
      cin.ignore();
      cout<<"Enter the student name :";
      gets(name);
      for(int i=0;i<5;i++)
      {
         cout<<"Enter the marks of "<<i+1<<":";
         cin>>marks[i];
      }
      getavg(marks);
     }

     void display()
     {
         cout<<"Addmission number is :"<<adno<<endl;
         cout<<"Student name is :"<<name<<endl;
         cout<<"Total Mark is :"<<total<<endl;
         cout<<"Avarage is :"<<avarge<<endl;
         

     }


};

int main()
{
   REPORT data;
   data.readinfo();

   cout <<"---------------------"<<endl;
   data.display();
   return 0;
}