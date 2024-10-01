#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Getter for name
    string getName() {
        return name;
    }

    // Getter for age
    int getAge() {
        return age;
    }

    // Method to display person's details
    void display() {
        cout << "Person(Name: " << name << ", Age: " << age << ")" << endl;
    }
};

int main() {
    // Create a Person object
    Person p1("John", 25);

    // Display details
    p1.display();

    return 0;
}

