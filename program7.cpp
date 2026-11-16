#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Stack
{
    T arr[5];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(T a)
    {
        if (top == 4)
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            ++top;
            arr[top] = a;
            cout << "Pushed: " << a << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Element popped: " << arr[top] << endl;
            top--;
        }
    }
};

int main()
{
    cout << "Integer Stack:" << endl;
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.pop();

    cout << endl << "Float Stack:" << endl;
    Stack<float> s2;
    s2.push(10.5);
    s2.push(20.5);
    s2.pop();

    cout << endl << "String Stack:" << endl;
    Stack<string> s3;
    s3.push("Hello");
    s3.push("Welcome");
    s3.pop();

    return 0;
}