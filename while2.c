#include <stdio.h>

int main()
{
    int num, largest, current;
    printf("Enter the total number of elements: ");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("Please enter a positive number of elements.\n");
        return 1;
    }
    printf("Enter number 1: ");
    scanf("%d", &largest);
 int i = 2;  
    while (i <= num) {
        printf("Enter number %d: ", i);
        scanf("%d", &current);
        if (current > largest) {
            largest = current;
        }

        i++; 
    }
    printf("The largest number is: %d\n", largest);
    
    return 0;
}

