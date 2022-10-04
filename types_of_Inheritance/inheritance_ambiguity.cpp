#include <iostream>
#include <string.h>
using namespace std;
class A
{
public:
    void func()
    {
        cout << "this is function A" << endl;
    }
};

class B
{
public:
    void func()
    {
        cout << "this is function B" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C object1; // inheritance ambuigity can be resolved using scope resolution operator
    object1.A::func();
    object1.B::func();
}