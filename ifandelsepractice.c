#include <stdio.h>
#include <cs50.h>


int x;

int main(void)
{
    x = get_int("What is x? ");
    
    if (x < 10)
    {
        printf("X is less than ten\n");
    }
    // See "else" is needed here because without it and only "if" 
    // if x is < 20 **AND** x < 10, both messages will print! We do not want this! 
    else if (x < 20)
    {
        printf("X is less than 20\n");
    }
    else
        printf("X is larger than 20\n");




}
