#include <iostream>
using namespace std;
class Hero
{
private:
    char name[100];
    int health;

public:
    char level;

    int gethealth() // getter function to get the values of variables declared private
    {
        return health;
    }
    void sethealth(int n) // setter function to set the value of private variables
    {
        health = n;
    }
};
int main()
{
    Hero ramesh; // static allocation method where the memory is allocated in the stack memory
    cout << "health of our hero ramesh is:" << ramesh.gethealth() << endl;
    cout << "but i want to set his health:" << endl;
    ramesh.sethealth(700);
    cout << "let's see now what his health is:" << ramesh.gethealth() << endl;

    Hero *b = new Hero; // dynamic allocation where the memory is allocated in the heap
    //*b is a pointer storing the address of a hero object

    // to access the properties of object b
    b->level = 'A';                                     // use of arrow operator
    cout << "the level of b is:" << (*b).level << endl; // traditional use of "." operator
    // or
    cout << "the level of b is:" << b->level << endl; // use of arrow operator
}