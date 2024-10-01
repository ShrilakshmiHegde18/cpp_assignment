#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
private:
    string name;
    int age;

public:
    // Constructor for Person
    Person(string n, int a) : name(n), age(a) {}

    // Getters for name and age (since they're private)
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    // Virtual method that can be overridden
    virtual void print_info() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class Student, inheriting from Person
class Student : public Person {
private:
    string department;

public:
    // Constructor for Student
    Student(string n, int a, string dept) : Person(n, a), department(dept) {}

    // Override print_info() to include department
    void print_info() override {
        cout << "Name: " << getName() << ", Age: " << getAge() << ", Department: " << department << endl;
    }
};

int main() {
    // Create an instance of Student
    Student s1("Bob", 20, "Mechanical Engineering");

    // Call print_info() on the Student object
    s1.print_info();

    return 0;
}

