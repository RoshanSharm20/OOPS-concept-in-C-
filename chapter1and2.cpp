#include <iostream>
#include "student.cpp"
using namespace std;
class Hero // declaration of object
{
    char name[100];

public:
    int health;
    char level;
};
int main()
{
    Hero H1; // creation of object of the class that was declred within the program
    cout << "size of hero type:" << sizeof(H1) << endl;
    student S1; // creation of object of the class that was declared in someother file
    cout << "size of student type:" << sizeof(S1) << endl;
    // to access the properties of the object we use the "." operator
    H1.health = 65; // health needs to be made public to access it
    cout << H1.health << endl;
}