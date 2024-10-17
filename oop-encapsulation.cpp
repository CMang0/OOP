#include<iostream>
using namespace std;

class Employee{
private:
    string Name;
    string Company;
    int Age;

public:

    //Constructor
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }

    //Setter
    void setName(string name){
        Name = name;
    }

    //Getter
    string getName(){
        return Name;
    }

    void setCompany(string company){
        Company = company;
    }

    string getCompany(){
        return Company;
    }

    void setAge(int age){
        if(age >= 18){
            Age = age;
        }
    }

    int getAge(){
        return Age;
    }

    void IntroduceYourself(){
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
        cout << endl;
    }
};

int main(){

    Employee employee1 = Employee("Siyam", "Microsoft. Inc", 23);
    employee1.IntroduceYourself();

    Employee employee2 = Employee("John", "Amazon Inc.", 35);
    employee2.IntroduceYourself();

    employee1.setAge(25);
    employee2.setAge(15);

    cout << employee1.getName() << " is " << employee1.getAge() << " years old." << endl;
    cout << employee2.getName() << " is " << employee2.getAge() << " years old." << endl;

}