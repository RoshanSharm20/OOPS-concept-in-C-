#include <iostream>
#include <string.h>
using namespace std;
class Hero
{
private:
    // char name[100];
    int health;

public:
    char *name;
    char level;
    Hero() // default constructor
    {
        cout << "default constructor is called" << endl;
        name = new char[100];
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
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch; // made a different copy of the pointer and stored it in the name
        this->health = temp.health;
        this->level = temp.level;
    }
    void setname(char name[])
    {
        strcpy(this->name, name);
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
        cout << "name is:" << this->name << endl;
        cout << "health is:" << this->health << endl;
        cout << "level is:" << this->level << endl;
    }
};
int main()
{
    Hero H1;
    char name[7] = "Roshan";
    H1.setname(name);
    // using default copy constructor ,this is a shallow copy
    // after making a different pointer it is a deep copy now
    Hero H2(H1);
    char name2[7] = "sharma";
    H2.setname(name2);
    H1.printdetails();
    H2.printdetails();
}