#include <stdio.h>
#include <cs50.h>

float discount(float price, int percentage);

int main(void)
{
    float price = get_float("Price:\n");          //declaring variable storage for price
    int percentage = get_int("Percent off:\n");    //declaring variable storage for % off
    float sale = discount(price, percentage);    //declaring variable relationships with >1 variables
    printf("Sale: %.2f\n", sale);                   //%.2f means two decimal places for cents
}

float discount(float price, int percentage)
{
    return price*(100-percentage)/100;          //requesting output to be stored and sent to a function/variable like in get_float
                                                //unlike what would be seen in sale = price*(100-perc)/100
}