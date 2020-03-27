#include <stdio.h>

float diff(float x, float h);
float f(float x);

int main()
{
    float h = 0.0001;
    printf("%f\n", diff(0, h));
    printf("%f\n", diff(1, h));
    printf("%f\n", diff(-1, h));
}

float diff(float x,float h)
{
    float d;
    d = (f(x + h) - f(x))/h;
    return d;
}
//function definition
float f(float x)
{
    return x*x + 2*x - 1;
}
