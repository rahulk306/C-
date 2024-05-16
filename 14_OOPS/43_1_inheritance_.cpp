#include<iostream>
using namespace std;

class Human
{
    private:
        int age;
        int height;
        int weight;

    public:
        int getAge()
        {
            return this->age;
        }
        void setWeight(int w)
        {
            this->weight = w;
        }

};

class Male: public Human
{
    public:
    string color;

    void sleep()
    {
        cout<<"Male sleeping"<<endl;
    }
};

int main()
{
    Male object;
    cout<<object.age<<endl;
    cout<<object.height<<endl;
    cout<<object.weight<<endl;
}