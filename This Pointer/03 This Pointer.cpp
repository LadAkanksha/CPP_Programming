using namespace std;
#include<conio.h>
#include<iostream>

class Base
{
    public:
            int a;
            Base(int a)
            {
                this->a = a+10;
                cout<<a<<endl;
                cout<<this -> a;
            }
};
int main()
{
    Base obj(5);
    return 0;
}
