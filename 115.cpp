#include<iostream>
using namespace std;
class Base
{
    public:
    Base(){cout<<"Non param base"<<endl;}
    Base(int x){cout<<"Param of Base "<<x<<endl;}
};
class Derived:public Base
{
    public:
    Derrived(){cout<<"Non param Deived"<<endl;}
    Derived(int y){cout<<"Param of derived "<<y<<endl;}

    Derived(int x, int y):Base(x)
    {cout<<"Param of derived "<<y<<endl;}

};
int main()
{
    Derived d(20,10);
}