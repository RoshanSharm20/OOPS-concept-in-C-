#include <iostream>
#include <string>
using namespace std;
class animal
{
public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class dog : public animal
{
public:
    void speak() // method overriding
    {
        cout << "barking" << endl;
    }
};
int main()
{
    dog D;
    D.speak(); // runtime polymorphism
}