#include<iostream>
using namespace std;

class AbstractEmployee
{
    //virtual void AskforPromotion() = 0;
};

class Employee:AbstractEmployee
{
private:
    int Age;
    string Name;
    string Company;

public:
    void IntroduceYourSelf() 
    {
        cout<<"Name - "<<Name<<endl;
        cout<<"company - "<<Company<<endl;
        cout<<"Age - "<<Age<<endl;
    }

    Employee(string name, string company, int age) // constructor
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void AskforPromotion()
    {
        if(Age>30)
            cout<<Name<<" got promoted"<<endl;
        else
            cout<<Name<<" sorry No promotion for you!!"<<endl;
    }
};

int main()
{
    Employee employee1 = Employee("Rittik","amazon",19);  
    Employee employee2 = Employee("Rahul","microsoft",19);
    employee1.AskforPromotion();
    employee2.AskforPromotion();
}