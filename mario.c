//Goal is to print an n by n image of the "#" symbol. "n" given by user input.

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do 
    {
        n = get_int("How wide is the base row? ");
    } 
    while (n < 1);
    
    //nested loops example:
    //rows added until condition met- do the loop below while i < n, then \n. Still less than n? REDO same actions until i = n
    for (int i = 0; i < n; i++)
    {
        //columns added until condition met- print # a number of times given by j++ or whatever typed in 3rd part of loop in parenthesis
        //which is called the "update"
        for (int j = 0; j < n; j++)
        {
        //print bricks
        printf("#");
        }
    printf("\n");
    }
    
}
