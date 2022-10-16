#include <iostream>
#include <cmath>
void fermat(int p)
{
    unsigned int x, y, z, m, n;
    x = (unsigned int)ceil(sqrt(p));
    do
    {
        z = x * x - p;
        y = (unsigned int)floor(sqrt(z));
        if (z == (y * y))
        {
            m = x + y;
            n = x - y;
            if (n != 1)
            {
                fermat(m);
                fermat(n);
                return;
            }
            else
            {
                std::cout << p<<" ";
                return;
            }
        }
        x += 1;
    } while (x + y < p);
    std::cout << p<<" ";
    return;
}
int main(){
    unsigned int n;
    std::cin>>n;
    fermat(n);
    return 0;
}