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
    Hero ramesh;
    cout << "health of our hero ramesh is:" << ramesh.gethealth() << endl;
    cout << "but i want to set his health:" << endl;
    ramesh.sethealth(700);
    cout << "let's see now what his health is:" << ramesh.gethealth() << endl;
}