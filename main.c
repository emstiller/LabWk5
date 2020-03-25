#include <stdio.h>

float arithmetic(float a, float b, int operation);

int main()
{
   float x = 1, y = 5;
   int operation = 4;
   float result;

   result = arithmetic(x, y, operation);
   printf("%f\n", result);
}

float arithmetic(float a, float b, int operation)
{
    switch(operation)
    {
        case 0: return a + b;
            break;
        case 1: return a - b;
            break;
        case 2: return a*b;
            break;
        case 3: return a/b;
            break;
        default: printf("Illegal operation %d\n", operation);
            return 0;
    }
}
