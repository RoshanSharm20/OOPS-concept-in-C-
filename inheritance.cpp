#include <iostream>
#include <string.h>
using namespace std;
class Human // base class or super class
{
public:
    string name;
    int age;
    int standard;

    int getAge()
    {
        return this->age;
    }
};

class Male : public Human // child class or derived class
// syntax ->  class child-class: mode specifier parent-class
{
public:
    int height;

    int getHeight()
    {
        return this->height;
    }
};

int main()
{
    Male M1;
    cout << "name is:" << M1.name << endl;
    cout << "age is:" << M1.age << endl;
    cout << "height is:" << M1.height << endl;

    cout << M1.getAge() << endl;
    cout << M1.getHeight() << endl;
}

// learn about various ways of inheritance i.e different mode of inheritance and how it affects the variables in child class