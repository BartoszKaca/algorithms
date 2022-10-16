#include <iostream>
#include <cmath>
int main()
{
    unsigned int p, i, g;
    std::cin>>p;
    g = (unsigned int)ceil(sqrt(p));
    for(int i = 2; i <=g; i++)
    {
        while(!(p%i))
        {
            std::cout<<i<<" ";
            p /=i;
        }
        if(p == 1)break;
    }
    if(p > 1)std::cout<<p;
    return 0;
}