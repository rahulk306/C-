#include<iostream>
using namespace std;

class Hero
{
private:  // properties
    int health;
    char name;
public:
    Hero()
    {
        cout<<"constructor called"<<endl;
    }
    Hero(int health)
    {
        cout<< "this -> "<<this<<endl;  // this keyword contains the address of the current object and here the current object is ramesh.
        this -> health = health;
    }
    Hero(int health,char name)
    {
        this -> health = health;
        this -> name = name;
    }
    void print()
    {
        cout<< health <<endl;
    }

};

int main()
{
    // object called statically 
   Hero ramesh(10);
   cout<< "Address of ramesh -> "<<&ramesh<<endl;  // here we will find that the address of ramesh and the value of this keyword has the same address. Here current object is ramesh. 

   // object called dynamically
   Hero *h = new Hero(11);
   cout<<"Address of the object called dynamically -> "<<h<<endl;

   ramesh.print();
   h->print();

   Hero temp(22,'r');
   temp.print();



}