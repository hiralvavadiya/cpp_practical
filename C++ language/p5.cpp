//class and object :-
#include<iostream>

class demo     //private
{
    int a;
    public:
    void get()
    {
        std::cout<<"enter a=";
        std::cin>>a;
    }

    void dis()
    {
        std::cout<<"a = "<<a;
    }
};
int main()
{
    demo b;
   
    b.get();
    b.dis();
    return 0;
}