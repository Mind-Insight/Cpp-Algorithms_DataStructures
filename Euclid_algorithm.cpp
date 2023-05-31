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
    if (a > b)
        swap(a, b);

    long long x = a;
    while (b % x != 0 && a % x != 0)
        x -= 1;
    return x;
}
