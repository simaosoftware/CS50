#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = get_int("Choose number:\n");
    if (number%2==0)
    {
        printf("Your number is even\n");
    }
    else
        printf("Your number is odd\n");
}