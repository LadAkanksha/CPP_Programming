
/// Program to find Maximum Digit in Number.

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int No = 0 , Temp = 0 , Dig = 0 , Max = 0;

    cout<<"\nEnter Number : ";
    cin>>No;

    Temp = No;

    while( Temp > 0 )
    {
        Dig = Temp%10;
        if(Dig > Max)
        {
            Max = Dig;
        }
        Temp /= 10;
    }
    cout<<"\nMaximum Digit in "<<No<<" is "<<Max;

    getch();
    return 0;
}
