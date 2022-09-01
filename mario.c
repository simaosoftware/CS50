#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do                       // iterates body in order and only then iterates "while" condition.
    {
        n=get_int("Width:\n");
    }
    while (n<1);             // meaning until n>=1, width stored in n. From >=1 onwards, iterates the "for" loop
                             // because in distances and related there is no 0 or negative numbers

    // an alternative to breaking a do while loop would be:
    // while (true) ... if (always true condition) break; since body 1st, condition 2nd, and break out when the condition is iterated

    for (int i=0; i<n; i++)  // count 1st row, verify condition, start counting 1st column, verify condition, print, increment j, increment i, repeat
    {
        for (int j=0; j<n; j++)
        {
            printf("?");
        }

        printf("\n");
    }
    printf("\n");
}