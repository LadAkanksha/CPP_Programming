#include<iostream>
#include<conio.h>
using namespace std;

class Animal
{
    public:
        void eat()
        {
            cout<<"\nI can Eat";
        }
        void sleep()
        {
            cout<<"\nI can Sleep";
        }
};
class Dog : public Animal
{
    public:
        void bark()
        {
            cout<<"\nI can Bark !";
        }
};
int main()
{
    ///Base Class Object
    Animal obj1;
    obj1.eat();
    obj1.sleep();
    ///obj1.bark();                          ///Not Allowed

    //Derived Class Object
    Dog obj2;
    obj2.eat();
    obj2.sleep();
    obj2.bark();
    getch();
    return 0;
}
