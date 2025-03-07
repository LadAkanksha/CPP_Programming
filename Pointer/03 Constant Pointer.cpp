/// Implimentation of Pointer in which Constant Pointer Points To an Integer.

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
    int num1 = 100, num2 = 200;

    int *const iPtr = &num1;

    cout<<num1<<endl;
    cout<<&num1<<endl;
    cout<<iPtr<<endl;
    cout<<*iPtr<<endl;
    cout<<&iPtr<<endl;

    iPtr = &num2;                /// Not Allowed
                                 /// Bcz In this context, *iPtr is Constant Pointer to An Integer.
                                 /// This Pointer can't Change the Address in it ,but can allowed to change Integer Value.
    cout<<num2<<endl;
    cout<<&num2<<endl;
    cout<<iPtr<<endl;
    cout<<*iPtr<<endl;
    cout<<&iPtr<<endl;

    *iPtr = 200;               /// This Assignment Allowed.
    cout<<iPtr<<endl;
    cout<<*iPtr<<endl;
    cout<<&iPtr<<endl;

    getch();
    return 0;
}
