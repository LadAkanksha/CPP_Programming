using namespace std;
#include<conio.h>
#include<iostream>

Class Base
{
    public:
            int a;
            Base(int a)
            {
                this->a = a;
            }
            void display()
            {
                cout<<" Value ="<<this->a;
            }
}
int main()
{
    Base obj(5);
    obj.Display()
    return 0;
}
