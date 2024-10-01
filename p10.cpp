#include <iostream>
using namespace std;

class Person {
    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }
        void print_info() {
            cout << "My name is: " << name << " my age is: " << age << endl;
        }
    private:
        string name;
        int age;
};

class Student : public Person{
  public:
    Student(string name, int age , string department): Person(name,age){
      this->department = department;
    }
    void print_info() {
      Person::print_info();
      cout << " Department is: " << department <<endl;
    }
  private:
    string department;
};

class Teacher : public Person{
  public:
    Teacher(string name, int age , int salary): Person(name,age){
      this->salary = salary;
    }
    void print_info() {
      Person::print_info();
      cout << "My salary is: " << salary <<endl;
    }
  private:
    int salary;
};



int main(){
  Person p1("Dasai",27);
  Person p2("Kunikida",28);
  p1.print_info();
  p2.print_info();
  
  Student s1("Atsushi",12,"ECE");
  s1.print_info();
  
  Teacher t1("Kakashi", 35, 40000);
  t1.print_info();
  return 0;
}

