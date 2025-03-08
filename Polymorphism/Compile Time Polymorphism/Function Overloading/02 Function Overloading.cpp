using namespace std;
#include<iostream>
#include<conio.h>


class Product
{
    private:
            int PId;
    public:
            Product()
            {
                this->PId = 0;
                cout<<"\nInside Constructor";
            }
            ~Product()
            {
                cout<<"\nInside Destructor";
            }
            void Display(int num)
            {
                cout<<"\n1st Display"<<num;
            }
            void display(float num)
            {
                cout<<"\n2nd Display";
            }
}Obj;
int main()
{
    Obj.Display(5);
    getch();

    Obj.Display(45.89);
    getch();
    return 0;
}
