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

    // Method to print person's details
    void print_info() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create two Person objects
    Person p1("John", 25);
    Person p2("Alice", 30);

    // Call print_info() on both objects
    p1.print_info();
    p2.print_info();

    return 0;
}

