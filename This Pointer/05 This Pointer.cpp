using namespace std;
#include<conio.h>
#include<stdio.h>

class Demo
{
    public :

            int id;
            Demo(int i)
            {
                this->id = i;
                printf("i = %d",&i);
                printf("this.id = %d",&this->id);
                printf("this = %d",&this);
            }
};

int main() {
  Demo obj = new Demo(4);
  printf(&obj);
  return 0;
}
