#include <stdio.h>
#include <math.h> // so we can use expf()

//function prototye for integral calculation
float f(float x);

int main()
{
   int N = 50; //number of trapezoids
   int k; // loop counter
   float x1 = 0, x2 = 2; //endpoints
   float dx = (x2 - x1)/N; //calculate widths of pyramids
   float fx; //integral calculation

   // evaluation of the sum of
   //k = 1 to N - 1 for f(k)
   float sum = 0;
   for(k = 1; k < N; k++)
   {
       float x;
       x = x1 + k*dx; //first calculate the value to go into the function
       sum = sum + f(x); //calculate the function, add to existing value
   }

   fx = dx*(0.5*f(x1) + sum + 0.5*f(x2)); //calculate integral

   printf("%f", fx); //print result

   return 0;
}

//function definition
float f(float x)
{
    return expf(x*x); //e^(x^2), the function to be integrated
}
