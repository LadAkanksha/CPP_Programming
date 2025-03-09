
using namespace std;
#include<iostream>
#include<stdio.h>
#include<conio.h>

class Demo
{
    public:
            int i, j;
            Demo()
            {
                i = 100;
                j = 20;
                cout<<"Constructor Called..";
            }
            void fun(int x)
            {
                cout<<i<<"  "<<j<<"  "<<x;
            }
};
int main()
{
    Demo obj;           // When object of class is created, this pointer is pointer which hold address of object.
    obj.fun(90);        // That Address is used to initialize value to the instance variable
}
