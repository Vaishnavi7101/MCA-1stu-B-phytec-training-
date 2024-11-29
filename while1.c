#include <stdio.h>
int main()
{
    int i = 1;  
    int sum = 0;  
    while (i <= 100)
    {
        sum += i;  
        i++;  
    }

    printf("The sum of numbers from 1 to 100 is: %d\n", sum);  

    return 0;
}

