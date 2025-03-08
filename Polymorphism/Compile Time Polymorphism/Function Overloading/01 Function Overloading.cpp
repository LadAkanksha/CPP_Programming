
using namespace std;
#include<iostream>
#include<conio.h>

class Base
{
    public:
            int val1;
            float val2;

            Base()
            {
                val1 = 0;
                val2 = 0.0;
                cout<<"\nConstructor is Being Called....";
            }
            void Operation(int a)
            {
                val1 = a;
                cout<<"\nOperation Method Called With 1 parameter....";
            }
            void Operation(int a , float b)
            {
                val1 = a ;
                val2 = b;
                cout<<"\nOperation Method Called With 2 parameter....";
            }
            ~Base()
            {
                cout<<"\nDestructor is Being Called...."<<val1<<"\t"<<val2;
            }
};
int main()
{
    Base bObj;                          ///Creation of Object
    bObj.Operation(12);                 /// Calling Method with Object Name
    getch();

    bObj.Operation(6,90.10);            /// Calling Method with Object Name
    getch();
                                        /// Destructor Called Here
    return 0;
}
