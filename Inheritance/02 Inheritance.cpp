#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
    private:
        int A;

    protected:
        int B;

    public:
        int C;
        Base();
        ~Base();
};
class Derived : public Base
{
    private:
        int P;

    protected:
        int Q;

    public:
        int R;
        Derived();
        ~Derived();
};
Base::Base()
{
    A = B = C = 10;
    cout<<"\nBase Constructor Called...";
}
Base::~Base()
{
    cout<<"\nBase Destructor Called...";
}
Derived::Derived()
{
    P = Q = R = 100;
    cout<<"\nDerived Constructor Called...";
}
Derived::~Derived()
{
    cout<<"\nDerived Destructor Called";
}

int main()
{
    Base objBase;                                   ///  objBase.A is not Accessible Due to Private Access Specifier
    cout<<objBase.C;                                ///  objBase.B is not Accessible Due to Protected Access Specifier

    getch();

    Derived objDerived;
    cout<<objDerived.C;                                ///  objDerived.P is not Accessible Due to Private Access Specifier
    cout<<objDerived.R;                                ///  objDerived.Q is not Accessible Due to Protected Access Specifier

    getch();
    return 0;
}
