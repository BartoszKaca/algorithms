#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned int n, g, c;
    cin >> n;
    bool* s;
    s = new bool[n + 1];
    g = (unsigned int)sqrt(n);
    for (int i = 0; i <= n ; i++)
    {
        s[i] = false;
    }
    for (int i = 2; i <= g; i++)
    {
        {
            c = i * i;
            while (c <= n)
            {
                s[c] = true;
                c += i;
            }
        }
    }
    for (int d = 2; d <= n ; d++)
    {
        if (s[d] == false)
        {
            cout << d << " ";
        }
    }
    delete[] s;
    return 0;
}