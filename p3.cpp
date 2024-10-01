#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name; // Private attribute
    int age;     // Private attribute

public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Method to print person's details
    void print_info() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create a Person object
    Person p1("John", 25);

    // Try to access private members directly (this will cause a compilation error)
    // cout << "Name: " << p1.name << ", Age: " << p1.age << endl; // This will NOT work

    // Correct way: Use the public method to access private data
    p1.print_info();

    return 0;
}

