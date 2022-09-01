#include <cs50.h>
#include <stdio.h>

int main(void)
{

    char answer = get_char("Do you agree?\n");
    if (answer=='y' || answer=='Y') //single characters use only 1
// string answer = get_string("Do you agree?\n"); could be used but since cannot compare strings, use 1 char
// incorrect is -->  if (answer == "yes" || answer == "y" || answer == "Y"  || answer=="YES")
// comparison of string literal is unspecified (use explicit string comparison instead)
    {
        printf("Nice.\n");
    }
    else
    {
        printf("Why?\n");
    }
}