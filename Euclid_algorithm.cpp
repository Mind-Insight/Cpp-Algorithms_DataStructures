#include <bits/stdc++.h>

#define ll long long

using namespace std;


int lcm(int a, int b)
{
    int res = a;
    while (res % b != 0)
    {
        res += a;
    }
    return res;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}
