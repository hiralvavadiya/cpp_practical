//class and object(summation):-
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
        c=a+b;
        std::cout<<"c = "<<c;
    }
   
};
int main()
{
    demo z;
    z.get();
    z.dis();

    return 0;
}