#include<iostream>
using namespace std;

class Employee
{
public:   // to access this class in the main we have to make this class public, by default every class is private class. There are three types of access modifier for a class  : 1) Private 2) Public 3) Protected.

//     -> we can use the private class methods or variables only inside the class.

    string Name;
    string Company;
    int Age;

    void IntroduceYourSelf()  // class method -> basically it is a fucntion.
    {
        cout<<"Name - "<<Name<<endl;
        cout<<"company - "<<Company<<endl;
        cout<<"Age - "<<Age<<endl;
    }

    // constructor -> the job of the constructor is to create the object for the class in which it is defined.
    Employee(string name, string company, int age)  // Employee() -> it is a constructor.
    {
        Name = name;
        Company = company;
        Age = age;
    }

};

int main()
{
    /* before creating the constructor in the class we were making the object here in the main as if we don't creater any constructor by our own, the ide provides a default constructor to creater the object but when we create our own constructor then we will lost the default constructor provided by the ide, means further we will not be able to create or use the object directly in the main. Now we have to use our own constructor to cteate a object in the main() */ 

    Employee employee1 = Employee("Rahul","amazon",19);  // here employee1 and employee2 are the object of the class Employee. Employee(), it is a constructor which is used to create object of the class type.

    // -> we were using the below mentioned way to create our object before creating constructor  in the class, to learn the concept of default constructor. 
    // employee1.Name = "Rahul";
    // employee1.Company = "amazon";
    // employee1.Age =  19;
    employee1.IntroduceYourSelf();

    Employee employee2 = Employee("Rittik","microsoft",19);
    // employee2.Name = "Rittik";
    // employee2.Company = "microsoft";
    // employee2.Age = 19;
    employee2.IntroduceYourSelf();
    
}