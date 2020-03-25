#include <stdio.h>

int main()
{
    const int N = 5; // const means "constant"
    float data[5] = {1.2, 8.4, 10.8, -0.4, -8.234, 3.1};
    float maximum = -1e30; // Declare other variables
    int i;
    int maxIndex;

    for(i = 0 ; i < N ; i++) // Implement search
    {
       if(data[i] > maximum)
       {
           maximum = data[i];
           maxIndex = i;
       }
    }

    printf("The maximum value was %f, found at index %d", maximum, maxIndex);   // Print result
}
