#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;
    string urn;

public:
    Person(string n = "", int a = 0, string u = "") {
        name = n;
        age = a;
        urn = u;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "URN: " << urn << endl;
    }
};

// Derived class (Single Inheritance)
class Student : public Person {
protected:
    string rollNo;
    string course;
    float cgpa;

public:
    Student(string n = "", int a = 0,
            string u = "", string r = "",
            string c = "", float g = 0.0)
        : Person(n, a, u) {

        rollNo = r;
        course = c;
        cgpa = g;
    }

    void displayStudent() {
        displayPerson();

        cout << "Course: " << course << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

// Derived class (Multilevel Inheritance)
class GraduateStudent : public Student {
private:
    string thesisTopic;
    string researchArea;
    string supervisor;

public:
    GraduateStudent(string n = "", int a = 0,
                    string u = "", string r = "",
                    string c = "", float g = 0.0,
                    string t = "", string ra = "",
                    string s = "")
        : Student(n, a, u, r, c, g) {

        thesisTopic = t;
        researchArea = ra;
        supervisor = s;
    }

    void displayGraduateStudent() {
        displayStudent();

        cout << "Thesis: " << thesisTopic << endl;
        cout << "Research: " << researchArea << endl;
        cout << "Supervisor: " << supervisor << endl;
    }
};

// Main function
int main() {

    cout << "\n--- Single Inheritance ---\n";

    Student s1("Adarsh S", 20, "URN2021CSE045",
               "21CSE045", "B.Tech CSE", 8.7);

    s1.displayStudent();

    cout << "\n--- Multilevel Inheritance ---\n";

    GraduateStudent g1("Rahul", 23, "URN2021CSE050",
                       "21CSE050", "M.Tech CSE", 9.0,
                       "Artificial Intelligence",
                       "Machine Learning",
                       "Dr. Sharma");

    g1.displayGraduateStudent();

    return 0;
}