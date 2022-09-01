#include <stdio.h>

void meow(int n); //because I want "main" to be at the top, I just declare 1 liners before and deal w/ them later

int main(void)
{
    meow(3);
}

void meow(int n) //modularization to insert meow function in a .h library
{
    for (int i=0; i<n; i++)
    {
         printf("meow ");
    }
}