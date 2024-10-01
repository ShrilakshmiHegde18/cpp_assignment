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

    // Getters for name and age
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

// Derived class Teacher, inheriting from Person
class Teacher : public Person {
private:
    double salary;

public:
    // Constructor for Teacher
    Teacher(string n, int a, double s) : Person(n, a), salary(s) {}

    // Override print_info() to include salary
    void print_info() override {
        cout << "Name: " << getName() << ", Age: " << getAge() << ", Salary: $" << salary << endl;
    }
};

int main() {
    // Create an instance of Teacher
    Teacher t1("Alice", 35, 50000);

    // Call print_info() on the Teacher object
    t1.print_info();

    return 0;
}

