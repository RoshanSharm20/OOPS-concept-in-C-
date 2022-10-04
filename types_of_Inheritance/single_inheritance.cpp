#include <iostream>
#include <string.h>
using namespace std;
class Human
{
public:
    string name;
    int age;
    int weight;
    int getAge()
    {
        return this->age;
    }
};

class Male : public Human // single inheritance as it male class inherits only human class
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
    Male m1;
    cout << "age is:" << m1.getAge() << endl;

    Human h1;
    cout << "age is:" << h1.getAge() << endl;
}
