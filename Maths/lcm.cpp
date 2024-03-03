#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a = 3, b = 4;
    cout << "LCM of " << a << " and "
         << b << " is " << lcm(a, b);
    return 0;
}

//lcm is 12   as gcd is 1  and (4*3)=12
// so 12/1 = 12 is the LCM
