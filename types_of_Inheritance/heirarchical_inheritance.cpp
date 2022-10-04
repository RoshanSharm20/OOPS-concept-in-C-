#include <iostream>
#include <string.h>
using namespace std;
class Human // human class is parent class to both male and female class
{
public:
    string name;
    int age;

    int getAge()
    {
        return this->age;
    }
};

class Male : public Human // heirarchical inheritance
{
public:
    int height;
};

class Female : public Human // heirarchical inheritance
{
public:
    int height;
};