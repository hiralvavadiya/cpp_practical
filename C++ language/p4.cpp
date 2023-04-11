//nested if conditon :-(positive , negative and zero)
#include<iostream>

int main()
{
    int a;
    std::cout<<"enter a=";
    std::cin>>a;

    if(a>0)
    {
        std::cout<<"a +ve";
    }
    else if(a==0)
    {
        std::cout<<"a is zeor";
    }
    else
    {
        std::cout<<"a -ve";
    }
    return 0;
}