#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, rows, spaces, hashes;

    do
    {
    height = get_int("Height: ");
    }

    while (height<1 || height>8);

    for (rows=0; rows<height; rows++)
    {
        for (spaces=0; spaces<height-rows-1; spaces++)
        {
            printf(" ");
        }
        for (hashes=0; hashes<=rows; hashes++)
            {
            printf("#");
        }
        printf("\n");
    }
}