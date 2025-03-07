#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void Calculate(int, int , int , int& , float&);

int main()
{
    int Phy = 0 , Chem = 0 , Math = 0 , Tot_Mark = 0;
    float Per = 0.0;

    cout<<"\nEnter 3 Subject Marks => \n";

    cout<<"\nEnter Physics Marks : ";
    cin>>Phy;

    cout<<"\nEnter Chemistry Marks : ";
    cin>>Chem;

    cout<<"\nEnter Mathematics Marks : ";
    cin>>Math;

    Calculate(Phy , Chem , Math , Tot_Mark , Per);

    cout<<"\n====================================";

    cout<<"\n\nStudent Report Card  => \n";
    cout<<"\n\t Physics     = "<<Phy;
    cout<<"\n\t Chemistry   = "<<Chem;
    cout<<"\n\t Mathematics = "<<Math;
    cout<<"\n\t---------------------";
    cout<<"\n\t Total Marks = "<<Tot_Mark;
    cout<<"\n\t Percentage  = "<<Per;

    cout<<"\n\n====================================";
    getch();
    return 0;
}
void Calculate(int P , int C , int M , int &Tot , float &Percentage)
{
    Tot = P + C + M;
    Percentage = (float)(Tot)/3;
    return;
}


