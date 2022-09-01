#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");
    printf("%li\n", x+y);
}

// careful with assigning wrong data type. a machine running 32bits meaning it can only count up to 2^32= 4 billion in one direction. with negatives, 4 billion turn to approx 2 billion up and 2 billion down. so if I assign to x 3B, it will ask me for x again
// even 64 bits has a cap though

/*
int main(void)
{
    float x = get_float("x: ");
    float y = get_float("y: ");
    float z = x/y
    printf("%.50f\n", z); --> ahah this is what those dudes that tested RUDIGER GAMM used for division
} */