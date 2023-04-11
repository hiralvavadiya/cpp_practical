//print array: -
#include<iostream>

int main ()
{
    int a[100],n,i;
    std::cout<<"enter n=";
    std::cin>>n;

    for(i=0;i<n;i++)
    {
        std::cout<<"a["<<i<<"]";
        std::cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        std::cout<<"\na["<<i<<"]"<<a[i];
    }
    return 0;
}