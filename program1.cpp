#include <iostream>
using namespace std;

int main()
{
    // Variables
    int a = 10;
    int b = 5;
    const float c = 3.14f;
    char ch = 'A';
    bool isTrue = true;

    // Arithmetic operators
    cout << "Sum: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << static_cast<float>(a) / b << endl;

    // Display different data types
    cout << "Float value: " << c << endl;
    cout << "Character: " << ch << endl;
    cout << "Boolean value: " << boolalpha << isTrue << endl;

    return 0;
}