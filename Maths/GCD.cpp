// GCD - basically the largest no possible in the range which can divide both a & b


#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{

    int a = 4, b = 8;  // output is 4
    cout << "The GCD of the two numbers is " << gcd(a, b);
}

