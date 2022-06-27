#include <cs50.h>
#include <stdio.h>

//Create executable that requests a price and a size from the user and print corresponding the sale price.

float discountPrice(float price, int percent);

int main(void)
{
    float price = get_float("Base Price? ");
    
    char size = get_char("Size? Type S, M or L ");

    if (size == 'S' || size == 's')
    {
        int percent = 15; 
        float salePrice = discountPrice(price, percent);
        printf("15%% off! $%.2f\n", salePrice);
    }
    else if (size == 'M' || size == 'm')
    {
     int percent = 25;  
        printf("25%% off! $%.2f\n", discountPrice(price, percent));   
    }
    else if (size == 'L' || size == 'l')
    {
     int percent = 35;  
        printf("35%% off! $%.2f\n", discountPrice(price, percent));   
    }
    else
        printf("Please input either S, M or L!\n");


}

float discountPrice(float pricePoint, int percentage)
    {
        return (pricePoint * (100 - percentage) / 100);
    }