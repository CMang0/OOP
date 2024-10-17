#include<iostream>
using namespace std;

class Employee{
public:
    string Name;
    string Company;
    int Age;

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }

    void IntroduceYourself(){
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
        cout << endl;
    }
};

int main(){
    // Employee employee1;
    // employee1.name = "Siyam";
    // employee1.company = "Microsoft Inc.";
    // employee1.age = 27;
    Employee employee1 = Employee("Siyam", "Microsoft. Inc", 23);
    employee1.IntroduceYourself();

    // Employee employee2;
    // employee2.name = "John";
    // employee2.company = "Amazon Inc.";       We can skip writing these using a constructor
    // employee2.age = 35;

    Employee employee2 = Employee("John", "Amazon Inc.", 35);
    employee2.IntroduceYourself();
}