//class and object(division):-
#include<iostream>
class demo
{
    int a,b,c;
    public:
    void get()
    {
        std::cout<<"enter a=";
        std::cin>>a;

        std::cout<<"enter b=";
        std::cin>>b;
    }
    void dis()
    {
        c=a/b;
        std::cout<<"c = "<<c;
    }
};
int main ()
{
    demo d;
    d.get();
    d.dis();
    return 0;
}