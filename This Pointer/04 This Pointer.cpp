using namespace std;
#include<conio.h>
#include<iostream>

class Base
{
    private :
                int x;
                int y;
    public:
                Base(int x , int y)
                {
                    this -> x = x;
                    this -> y = y;
                }
                Base &setX(int a)
                {
                    x = a;
                    return *this;
                }
                Base &setY(int b)
                {
                    y = b;
                    return *this;
                }
                void print()
                {
                    cout<<"\nx = "<<x<<" y = "<<y<<endl;
                }

};
int main()
{
    Base obj(5,5);
    obj.setX(10);
    obj.setY(20);
    obj.print();
    return 0;
}
