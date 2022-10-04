#include <iostream>
#include <string.h>
using namespace std;
class A
{
public:
    int a;
    int b;
    void func() // function overloading
    {
        cout << "function without arguments" << endl;
    }
    void func(int val) // function overloading
    {
        cout << "this is function with one argument" << endl;
    }
    int func(int val, char m) // function overloading
    {
        cout << "this is function with two arguments" << endl;
    }
};

class B
{
public:
    int a, b;

    int operator+(B &obj) // operator overloading
    {
        cout << "operator overloading" << endl;
        return obj.b;
    }
};
int main()
{
    A object1;
    object1.func();

    B object2;
    B object3;
    object2 + object3; // first object is the current object and the second object is the passed arguments
}
