///Program to accept number from user check whether palindrome or not.

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int No =0, Temp =0, Dig =01, Res=0;

    cout<<"\nEnter Number : ";
    cin>>No;

    Temp = No;
    while(Temp >0)
    {
        Dig=Temp%10;
        Res = (Res*10) + Dig;
        Temp = Temp/10;
    }

    if(No == Res)
    {
        cout<<"\n"<<Res<<" is Palindrome Number.";
    }
    else{
        cout<<"\n"<<Res<<" is Not Palindrome Number.";
    }
    getch();
    return 0;
}
