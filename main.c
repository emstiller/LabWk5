#include <stdio.h>

int main()
{
    /* maximum integer to test, declared constant
    so maximum integer can be easily changed */
    const int MAX = 100;
    char numbers[100]; //index ranges from 0 to 99
    int index;
    int j = 1;

    //initialised numbers[]
    for(index = 0; index < MAX; index++)
    {
        numbers[index] = 1;
    }


    /* do the Sieve algorithm here
    for(index = 2; ...etc */
    for(index = 2; index < MAX; index++) // starting at index 2, going up to 100
    {
        if(numbers[index] == 1) // which they will because they were all set to 1
        {
           for(j = 2*index; j < MAX; j = j + index)
           {
               numbers[j] = 0;
           }
        }
    }

    //print results
    printf("The following numbers are prime:\n");

    for(index = 2; index < MAX; index++)
    {
        if(numbers[index] == 1) // remaining indices that haven't been crossed out
        {
            printf("%d\n", index);
        }
    }
    return 0;
}
/* why is it that when I have <= for any
of the conditions the code doesn't work? */
