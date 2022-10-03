#include <iostream>
using namespace std;
class Hero
{
private:
    char name[100];
    int health;

public:
    Hero() // default constructor
    {
        cout << "default constructor is called" << endl;
        this->health = 200;
        this->level = 'A';
    }
    Hero(int health) // parmaterised constructor
    {
        cout << "parameterised constructor is invoked" << endl;
        this->health = health;
    }
    Hero(Hero &temp)
    {
        this->health = temp.health;
        this->level = temp.level;
    }
    char level;

    int gethealth() // getter function to get the values of variables declared private
    {
        return health;
    }
    void sethealth(int n) // setter function to set the value of private variables
    {
        health = n;
    }
    void printdetails()
    {
        cout << "health is:" << this->health << endl;
        cout << "level is:" << this->level << endl;
    }
    ~Hero()
    {
        cout << "destructor is called" << endl;
    }
};
int main()
{
    Hero H1; // static allocation
    // In static allocation the destructor is called automatically
    Hero *b = new Hero; // dynamic allocation
    // In dynamic allocation of object the destructor has to be invoked manually
    delete b;
}