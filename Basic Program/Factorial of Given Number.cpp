///Program to find Factorial of given number

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int No = 0 , i = 0 , Fact = 1 , Temp = 0;

    cout<<"\nEnter any Number : ";
    cin>>No;
    Temp = No;
    while(Temp > 0)
    {
        Fact = Fact*Temp;
        Temp--;
    }

    cout<<"\n\nFactorial of "<<No<<" is "<<Fact;

    getch();
    return 0;
}
