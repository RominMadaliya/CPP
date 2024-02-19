#include<iostream>
using namespace std;

void convert(double dol)
{ 
    int rupees;
    rupees=dol*82;
    cout<<"The rupees is :"<<rupees<<endl;
}
float convert(float feet)
{

    float inch=feet*12;
    return inch;
}

void convert(int inch)
{
    int centimeter = (float)inch*2.54;
    cout<<"The centimeter is :"<<centimeter<<endl;
}


int main()
{
    double num;
   float inch;
   float a;
   int centimeter;
    cout<<"Enter the doller you want convert into rupees :";
    cin>>num;
    convert(num);
    cout<<"Enter the feet you want convert into inch :";
    cin>>inch;
    a=convert(inch);
    cout<<"The inch is :"<<a<<endl;
    cout<<"Enter the inch you want convert into centimeter :";
    cin>>centimeter;
    convert(centimeter);

    


}