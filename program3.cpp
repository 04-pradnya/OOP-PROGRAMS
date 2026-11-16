#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:

    // 1. Default Constructor
    Student()
    {
        name = "Unknown";
        age = 0;
    }

    // 2. Parameterized Constructor
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    // 3. Copy Constructor
    Student(const Student &s)
    {
        name = s.name;
        age = s.age;
    }

    // Display Function
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "----------------" << endl;
    }
};

int main()
{
    Student a;              // Default Constructor
    Student b("Pradnya", 18); // Parameterized Constructor
    Student c(b);           // Copy Constructor

    cout << "Default Constructor:" << endl;
    a.display();

    cout << "Parameterized Constructor:" << endl;
    b.display();

    cout << "Copy Constructor:" << endl;
    c.display();

    return 0;
}
