///Program to find given number is perfect or not.

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int Num = 0 , i = 0 ,Sum=0 , j = 0;
    cout<<"\nEnter Upper Limit : ";
    cin>>Num;

    for( i=1 ; i<=Num ;i++)
    {
        for(j=1 ; j<i ; j++)
        {
            if( i%j == 0 )
            {
                Sum += j;
            }
        }

        if(Sum == i)
        {
            cout<<"\t"<<Sum;
        }
        Sum = 0;
    }
    getch();
    return 0;
}
