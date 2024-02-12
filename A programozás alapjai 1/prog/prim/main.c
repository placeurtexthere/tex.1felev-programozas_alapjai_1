#include <stdio.h>

int gcd(int a, int b)
{
    int c;
    while (b!=0)
    {
        c=b;
        b=a%b;
        a=c;
    }
    return a;
}

int relative_primes(int one, int two)
{
    int out;
    out=gcd(one,two);
    if (out==1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int a, b, d, prim=0;
    while(scanf("%d%d", &a, &b)==2)
    {
        d=relative_primes(a,b);
        if(d==1)
            prim++;
    }
    printf("%d", prim);
    return 0;
}