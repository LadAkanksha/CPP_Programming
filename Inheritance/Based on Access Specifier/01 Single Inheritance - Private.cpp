#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
    private :
            int  A , B ;

            void BFun1()
            {
                 cout<<"Private Base Function Called...";
                A = 101;
                B = 201;
                cout<<A<<"  "<<B<<endl;
            }
    protected:
            int C , D;

            void BFun2()
            {
                cout<<"Protected Base Function Called...";
                C = D = 300;
                cout<<C<<" "<<D<<endl;
            }

    public:
            int E , F ;

            Base()
            {
                cout<<"Base Constructor "<<endl;
                A = B = C = D = E = F = 0;
            }
            ~Base()
            {
                cout<<"Base Destructor "<<endl;
            }
            void BFun3()
            {
                cout<<"Public Base Function Called...";

                cout<<A<<"  "<<B<<"  "<<C<<"  "<<D<<"  "<<E<<"  "<<F<<endl;
            }
};
class Derived : private Base
{
    private :
            int  P , Q ;

            void DFun1()
            {
                cout<<"Private Base Function Called...";

                cout<<P<<"  "<<Q<<endl;
            }
    protected:
            int R , S;

            void DFun2()
            {
                 cout<<"Protected Base Function Called...";

                cout<<R<<" "<<S<<endl;
            }

    public:
            int X , Y ;

            Derived()
            {
                cout<<"Derived Constructor "<<endl;
                P = Q = R = S = X = Y = 0;
            }

            ~Derived()
            {
                cout<<"Derived Destructor "<<endl;
            }
            void DFun3()
            {
                 cout<<"Public Base Function Called...";
                X = 1000;
                Y = 2000;
                cout<<P<<"  "<<Q<<"  "<<R<<" "<<S<<"  "<<X<<"  "<<Y<<endl;
            }
};

int main()
{
    Base obj1;
    ///obj1.BFun1();                    /// Not Accessible

    ///obj1.BFun2();                    /// Not Accessible

    ///obj1.BFun3;                    ///Not Accessible

    Derived obj2;
    ///obj2.BFun1();                    /// Not Accessible
   /// obj2.BFun2();                    /// Not Accessible

    ///obj2.BFun3();                    ///Not Accessible
    getch();
    ///obj2.DFun1();                    /// Not Accessible
    ///obj2.DFun2();                    /// Not Accessible
    obj2.DFun3();

    getch();
    return 0;
}
