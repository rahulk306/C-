#include<iostream>
using namespace std;

class Employee
{
private:   // here these three properties of the class are encapsulated, means hidden inside the class, no one besides the members are able to access them directly.
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)  // setter
    {
        Name = name;
    }
    string getName()  // getter
    {
        return Name;
    }
    void getCompany(string company)
    {
        Company = company;
    }
    string getCompnay()
    {
        return Company;
    }
    void setAge(int age)
    {
        Age = age;
    }
    int getAge()
    {
        return Age;
    }

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

};

int main()
{

    Employee employee1 = Employee("Rahul","amazon",19);  
    employee1.IntroduceYourSelf();

    Employee employee2 = Employee("Rittik","microsoft",19);
    employee2.IntroduceYourSelf();

    employee1.setAge(20); // setters calling.
    cout<<"Age of employee1 is: "<<employee1.getAge()<<endl;  // getters calling.
    
}