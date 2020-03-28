#include <stdio.h>

unsigned int fib(void);

int main()
{
    int n;

    for(n = 1; n < 10; n++)
    {
        printf("%d %u\n", n, fib() );
    }

    return 0;
}

unsigned int fib(void)
{
    static int xnm2 = 1;
    static int xnm1 = 1;
    static int xn = 0;

    xnm2 = xnm1;
    xnm1 = xn;

    switch(xn) {
    case 0: xnm1 = 1;
        xn = xnm1 + xnm2;
        return xnm2;
        break;
    case 2: xn = xnm1 + xnm2;
        return xnm2;
        break;
    default: xn = xnm1 + xnm2;
        return xnm2;
    }
}
