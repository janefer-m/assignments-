#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Student inherits from Person
class Student : public Person {
protected:
    string studentID;

public:
    Student(string n, int a, string id) : Person(n, a) {
        studentID = id;
    }

    void displayStudent() {
        displayPerson(); // Inherited function from Person
        cout << "Student ID: " << studentID << endl;
    }
};

// UniversityStudent inherits from Student
class UniversityStudent : public Student {
private:
    string course;

public:
    UniversityStudent(string n, int a, string id, string c)
        : Student(n, a, id) {
        course = c;
    }

    void displayUniversityStudent() {
        displayStudent(); // Uses inherited Student function
        cout << "Course: " << course << endl;
    }

    void study() {
        cout << name << " is studying " << course << "." << endl;
    }
};

int main() {
    // Create an object of the final derived class
    UniversityStudent student1(
        "Amina", 20, "24/U/1234", "Electrical Engineering"
    );

    cout << "UNIVERSITY STUDENT DETAILS" << endl;
    cout << "--------------------------" << endl;

    student1.displayUniversityStudent();
    student1.study();

    return 0;
}
