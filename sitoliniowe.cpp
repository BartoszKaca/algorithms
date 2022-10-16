#include <iostream>

int main()
{
    unsigned int i, p , q , n, x;
    bool * s;
    std::cin >> n;
    s = new bool[n +1];
    for (int i =2; i<= n; i++)
    {
        s[i] = true;
    }
    p = 2;
    while(p*p <=n)
    {
        q = p;
        while(p*q<=n)
        {
            x = p*q;
            while(x <= n)
            {
                
                s[x] = false;
                x *=p;
            }
            while (!s[++q]);
        }
        while (!s[++p]);
        
    }
     for (int i = 2; i <= n ; i++)
    {
        if (s[i] == true)
        {
            std::cout << i << " ";
        }
    }

    delete[] s;
    return 0;
}