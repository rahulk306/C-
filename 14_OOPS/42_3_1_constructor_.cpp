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

};

int main()
{
    cout<<"hi"<<endl;
    Hero ramesh;  // whenever we are creating an object, constuctor is called. 
    cout<<"hello"<<endl;
    Hero *h = new Hero;
}