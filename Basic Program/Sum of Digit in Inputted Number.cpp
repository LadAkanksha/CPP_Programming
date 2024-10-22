
///Program To Find Maximum Digit Among 3digit Number.

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int No = 0 , Dig = 0 , Sum = 0 , Temp = 0;

    cout<<"\nEnter Three Digit Number : ";
    cin>>No;

    Temp = No;
    while(Temp>0)
    {
        Dig = Temp % 10;
        Sum = Sum + Dig;
        Temp = Temp/10;
    }

    cout<<"\nSummation of Digit in "<<No<<" is "<<Sum;
    getch();
    return 0;
}
