// class is a user defined datatype and object is an instance of a class.

#include<iostream>
using namespace std;

// defining a class
class Hero
{
    // properties of the class hero.
    int health;
};

class zero  // empty class
{

};

int main()
{
    // creation of a object
    Hero h1;
    cout<<"size of object h1: "<<sizeof(h1)<<endl;

    zero z1;
    cout<<"size of object z1: "<<sizeof(z1)<<endl; // 1 byte system allocate 1 byte of memeory for an empty class only for its identification ans keeping its track.
}