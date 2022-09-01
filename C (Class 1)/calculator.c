#include <stdio.h>
#include <cs50.h> //bool data type not included without cs50 library | string data type as well

int main(void)
{
    long x = get_long("x: "); //use unsigned int when I want to use the range of positives only, at the expense of no negatives
    long y = get_long("y: "); //use short for ?? | char uses 1 byte - 8bits - therefore 2^8/2 is 127 positive numbers for ASCII (numbers as strings are different than int)
// I should also name all variables in the same line separated by comma if of the same data type
// Here I am initializing (assigning and declaring in one sentence, great. remember after 1st data type declaration, do NOT specify type again)
    printf("%li\n", x+y);
}

// careful with assigning wrong data type. an int uses 4 bytes - 32bits meaning it can only count up to 2^32= 4 billion in one direction. with negatives, 4 billion turn to approx 2 billion up and 2 billion down. so if I assign to x 3B, it will ask me for x again
// even 64 bits has a cap though

/*
int main(void)
{
    float x = get_float("x: ");
    float y = get_float("y: ");
    float z = x/y
    printf("%.50f\n", z); --> ahah this is what those dudes that tested RUDIGER GAMM used for division
} */
