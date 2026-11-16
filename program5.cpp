#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:

    // Function Overloading (Constructors)

    // Default Constructor
    Complex()
    {
        real = 0;
        imag = 0;
    }

    // Parameterized Constructor (One Argument)
    Complex(float x)
    {
        real = x;
        imag = 0;
    }

    // Parameterized Constructor (Two Arguments)
    Complex(float x, float y)
    {
        real = x;
        imag = y;
    }

    // Operator Overloading (+)
    Complex operator+(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    // Operator Overloading (*)
    Complex operator*(Complex c)
    {
        return Complex(
            real * c.real - imag * c.imag,
            real * c.imag + imag * c.real
        );
    }

    // Display Function
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4);
    Complex c2(1, 2);

    Complex c3 = c1 + c2;  // Operator +
    Complex c4 = c1 * c2;  // Operator *

    cout << "c1 + c2 = ";
    c3.display();

    cout << "c1 * c2 = ";
    c4.display();

    return 0;
}