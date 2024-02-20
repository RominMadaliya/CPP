#include <iostream>
using namespace std;

void convert(double dol)
{
    int rupees;
    rupees = dol * 82;
    cout << "The rupees is :" << rupees << endl;
}
float convert(float feet)
{

    float inch = feet * 12;
    return inch;
}

void convert(int inch)
{
    int centimeter = (float)inch * 2.54;
    cout << "The centimeter is :" << centimeter << endl;
}

struct rom
{
    float celsius;
    
    };

rom to_farenheit(rom an)
{
    rom ans;
    ans.celsius = ((float)an.celsius*(9.0/5.0))+32.0;
    return ans;
}


int main(void)
{
    double num;
    float inch;
    float a;
    int centimeter;
    cout << "Enter the doller you want convert into rupees :";
    cin >> num;
    convert(num);
    cout << "Enter the feet you want convert into inch :";
    cin >> inch;
    a = convert(inch);
    cout << "The inch is :" << a << endl;
    cout << "Enter the inch you want convert into centimeter :";
    cin >> centimeter;
    convert(centimeter);
    rom Cel;
    cout << "Enter the celsius : ";
    cin >> Cel.celsius;
    rom ans;
    ans=to_farenheit(Cel);
    cout << Cel.celsius << " is equal to  " << ans.celsius << " farnheit" << endl;

}                                                                                       .
 