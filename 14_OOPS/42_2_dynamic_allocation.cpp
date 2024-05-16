#include<iostream>
using namespace std;

class Hero
{
public:
    int health;
    string name;

    void setHealth(int h)
    {
        health = h;
    }
    int getHealth()
    {
        return health;
    }
    void setName(string ch)
    {
        name = ch;
    }
    string getName()
    {
        return name;
    } 

};

int main()
{
    // static allocation of object
    Hero a;
    //a.setHealth(80);
    a.setName("rahul");
    cout << "Health is "<<a.health<<endl;
    cout << "Name is "<<a.name<<endl;

    // dynamic allocation of object
    Hero *b = new Hero;
    b -> setHealth(90);
    b -> setName("rittik");
    cout << "Health is "<< (*b).health << endl;
    cout << "Name is " << (*b).name << endl;

}

