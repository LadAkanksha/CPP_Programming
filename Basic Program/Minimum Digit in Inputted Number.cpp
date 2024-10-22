
/// Program to find Minimum Digit in Number.

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int No = 0 , Temp = 0 , Dig = 0 , Min = 0;

    cout<<"\nEnter Number : ";
    cin>>No;

    Temp = No;
    Min = No;

    while( Temp > 0 )
    {
        Dig = Temp%10;
        if(Dig < Min)
        {
            Min = Dig;
        }
        Temp /= 10;
    }
    cout<<"\nMinimum Digit in "<<No<<" is "<<Min;

    getch();
    return 0;
}
