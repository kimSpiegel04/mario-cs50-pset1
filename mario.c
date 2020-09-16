#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    
    // n must be between 1 and 8
    while (n < 1 || n > 8);
    
    // build pyramid
    // i = how many rows
    for (int i = 0; i < n; i++)
    {
        // right align text so that center is aligned
        printf("%*s", n - i - 1, "");
        
        // j = how many # in a row
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
