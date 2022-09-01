#include <cs50.h>
#include <stdio.h>

int main()
{
    int height, i, j, space;                                    // i --> entry row "0" to row == "height", j --> entry # "0" to # == "row", space --> entry *space* "0" to space == height - row - 1"
    do                                                          // Loop to only keep asking user for input in order to store it when the user does not respect restrictions
    {
        height = get_int("Height: ");
    }
    while (height<1 || height>8);                               // While what we do not allow happens

    for (i=0; i<height; i++)                                    // For every row entry, print "height" \n's (line 31)
    {
        for (space=0; space<height-i-1; space++)                // For every row entry, print "height - i - 1" spaces. And it keeps that loop until spaces are printed and only then prints hashes
        {                                                       // Inverts shape of the triangle vertically with hypothenuse from y=-kx to y=kx
            printf(" ");
        }
            for (j=0; j<=i; j++)                                // For every row entry, print "\n-rows" hashes
            {                                                   // If it was j<height, for every row print # "height" times (square)
                printf("#");
            }

        printf("  ");

        for (j=0; j<=i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}