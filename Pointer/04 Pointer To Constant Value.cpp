/// Implimentation of Pointer in which Pointer Points To an Integer Contant.

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
    int num1 = 100, num2 = 200;
    int const *iPtr = &num1;

    printf("\n%d",num1);
    printf("\n%d",&num1);
    printf("\n%d",iPtr);
    printf("\n%d",*iPtr);
    printf("\n%d",&iPtr);

    *iPtr = 200;                /// Not Allowed
    printf("\n%d",num1);        /// Bcz In this context, *iPtr is Pointer to An Integer Constant.
    printf("\n%d",&num1);       /// This Pointer can Change the Address in it ,but can't allowed to change Integer Value.
    printf("\n%d",iPtr);
    printf("\n%d",*iPtr);
    printf("\n%d",&iPtr);

    iPtr = &num2;               /// This Assignment Allowed.
    printf("\n%d",num2);
    printf("\n%d",&num2);
    printf("\n%d",iPtr);
    printf("\n%d",*iPtr);
    printf("\n%d",&iPtr);

    getch();
    return 0;
}
