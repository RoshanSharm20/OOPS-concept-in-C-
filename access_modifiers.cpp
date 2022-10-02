#include <iostream>
using namespace std;
// we learn to use various access modifiers in c++
// mainly the first two 1.public 2.private
class Hero
{
    char name[100];
    // public access modifier allows the properties and functions to be accessed within the class and outside the class
public:
    int health;
    // private access specifier allows the properties and functions to be accessed only within the class
private:
    char level;

    void printinfo()
    {
        cout << "level is:" << level << endl; // level is declared as private therefore it can be accessed within the class
    }
};
int main()
{
    Hero H1;
    cout << H1.health << endl;
    cout << H1.level << endl; // level is declared as private therefore it cannot be accessed outside the class(therefore it is showing an error)
}