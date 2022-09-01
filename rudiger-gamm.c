#include <stdio.h>
#include <cs50.h>

int main(void)
{
    double x = get_double("write 13:\n"); //float carries 32 bits so double with 64 bits is needed
    // using int for both would cause int truncation, meaning it would print int 0 and then fill decimals with 0
    // unless after that i would write printf("%.50f", (float)x/(float)y)
    double y = get_double("write 97:\n"); //cannot use float if I want to do large operations
    printf("%.50f", x/y);                 //floating point imprecision: incapacity to represent R, real numbers
                                          //solved in scientific computing with more digits
}

/* Little story: In the 70s when computing power was small and expensive, the tracking of years was using 2 digits
to represent Jan/1/70-71-72-...-99-00 counting time in seconds. With 32 bits --> (16+8+4+2+0) --> only 2Billion up.
So by 32-bit computers, the world restarts at 19 Jan 2038 */
