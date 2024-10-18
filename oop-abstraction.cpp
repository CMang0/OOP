#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee{
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

    // Implement the pure virtual function
    void AskForPromotion() override{
        if(Age >= 30){
            cout << Name << " got promoted !!!" << endl;
        } else {
            cout << Name << ", sorry! You are not eligible for promotion." << endl;
        }
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
    Employee employee2 = Employee("John", "Amazon Inc.", 35);

    employee1.AskForPromotion();
    employee2.AskForPromotion();

}