//Goal is to print an x by n image of the "#" symbol. 
//"n" given by user input and represents rows
//"x" is the number of columns 
//want topmost rows to have least columns, from x = 1 on top row 
//to x = n at very bottom row, from right to left all visualized with "#" symbol

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
    
    //rows
    for (int i = 0; i < n; i++)
    {
        //columns, this happens until false
        for (int j = 0; j < n - i - 1; j++)
        {             
        printf(" ");  
        }
        //THEN this happens until false, at tail end of the above
        for (int k = 0; k < i + 1; k++)
        {                  
        printf("#");  
        }     
    //creates new row, then row loop iterates again    
    printf("\n");
    }
        
    
}

//This was pretty difficult! The final logic was to create a number of columns within
//a row where empty columns = user input num - current row num
//THEN display a number of "#" symbols = current row num
//Then move down to the nex row until user input number of rows created