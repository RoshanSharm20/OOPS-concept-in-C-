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

class Boy : public Male // multi-level inheritance as it inherits class male which has been deived from human class
{
public:
    int books;

    int getBooks()
    {
        return this->books;
    }
};

class child : public Male, Boy // multiple inheritance as child class is derived from male and boy class
{
public:
    int toys;
};

int main()
{
    Male m1;
    cout << "age is:" << m1.getAge() << endl;

    Human h1;
    cout << "age is:" << h1.getAge() << endl;

    Boy b1;
    cout << "number of bookds is:" << b1.getBooks() << endl;

    child c1;
    cout << "number of toys with child is:" << c1.toys << endl;
}