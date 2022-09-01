#include <stdio.h>


int main(void)
{
    for (int i=0; i<3; i++) // does pc count, verify, print, update or count, verify, update, print?
    {                       // for loops define variables inside its scope, unline "while" which takes outside
        printf("meow\n");
    }
}

// int meowswanted = get_int("How many meows do you want?\n");
// int i = 0;   // I need a variable for counting # of loops. For counting, just use i
                // could set i=1 and in loop (i<=meowswanted)
                // could set i=3 and in loop  (i>0) with i--
// while (i<meowswanted)
//    {
//        printf("meow ");
//        i++; // I need a system for counting # of loops. Could also write with +=
//    }
//    printf("\n");