#include <stdio.h>

int isPrime(int x);

int main()
{
    int testNum;
    for(testNum = 2; testNum < 20; testNum++)
    {
        if(isPrime(testNum))
            printf("%d is prime\n", testNum);
        else
            printf("%d is not prime\n", testNum);
    }
    return 0;
}

int isPrime(int x)
{
    int count;
    for(count = 2; count < x; count++)
    {
        if(x%count == 0)
            return 0;
    }
    return 1;
}
