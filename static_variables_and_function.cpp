#include <iostream>
using namespace std;
class Hero
{
private:
    char name[100];
    int health;

public:
    static int timeToComplete;
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
    static int random() // only static keywords can be accessed
    {
        return timeToComplete;
    }

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
int Hero::timeToComplete = 5; // static variables are initialized outside the class
int main()
{
    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;
}