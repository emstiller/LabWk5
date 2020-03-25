#include <stdio.h>

float arithmetic(float a, float b);

int main()
{
   float x = 1, y = 5;
   float result;

   result = arithmetic(x, y);
   printf("%f plus %f is %f\n", x, y, result);
}

float arithmetic(float a, float b)
{
    return a + b;
}
