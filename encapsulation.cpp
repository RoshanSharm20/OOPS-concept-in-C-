#include <iostream>
#include <string.h>
using namespace std;
class student // classes are used to achieve encapsulation
{
private: // the data members are declared as private in fully encapsulation class
    string name;
    int age;
    int standard;

public:
    int getAge() // class can be made read-only using getter functions
    {
        return this->age;
    }
};
int main()
{
    student ramesh;
    cout << "age is:" << ramesh.getAge() << endl;
}