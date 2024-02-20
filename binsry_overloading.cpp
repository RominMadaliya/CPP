#include <iostream>
using namespace std;
class Complex
{
    int x, y;

public:
    Complex()
    {
        x = 0;
        y = 0;
    };
    Complex(int a, int b)
    {
        x = a;
        y = b;
    }
    void desplay()
    {
        cout << "The real part:" << x << endl;
        cout << "The imaginary part:" << y << endl;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1 = Complex(3, 6);
    c2 = Complex(2, 4);
    cout << "The first input" << endl;
    c1.desplay();
    cout << "The second input" << endl;
    c2.desplay();
    cout << "the output" << endl;
    c3 = c1 + c2;
    c3.desplay();
    return 0;
}