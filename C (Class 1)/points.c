#include <cs50.h>
#include <stdio.h>

int main(void)
{
//  I should change 2 to variable --> const int AVERAGE = 2; in order to protect myself against error if I know it wont change (common practise to capitalise it)
    int points_lost_project0 = get_int("How many points did you lose?");
    if (points_lost_project0<2)
    {
        printf("You lost fewer points than average\n"); //\n if i wanted to keep interacting with user
    }
    else if (points_lost_project0>2) //usually ; comes after fuctions. if and loops are not.
    {
        printf("You lost more points than average\n");
    }
    else
    {
        printf("You are average in losing!\n");
    }
}