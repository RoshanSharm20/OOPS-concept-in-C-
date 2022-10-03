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
};
int main()
{
    Hero ramesh; // default constructor is invoked
    ramesh.printdetails();
    Hero suresh(70); // parameterised constructor is invoked
    suresh.printdetails();
    // use of default copy constructor
    Hero rahul(suresh);
    rahul.printdetails();
    // use of copy constructor created by self
    Hero ganesh(ramesh);
    ganesh.printdetails();
}