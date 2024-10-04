/*
Abul, Babul and Bablu with their money will go to eat at a resturant. The have discussed and decided what they will eat.

If their total money is at least 1000 they will eat "Three Kacchi", otherwise if they have at least 500 taka they will eat "One Large Pizza", if the money is less then 500 and they have at least 250 taka they will eat "Three Small Burger", if they have at least 100 taka they will eat "Three Fuchka" and if they don't even have 100 taka they will be sad and eat "Nothing".

So if they tell you how many money they have can you tell what they are going to eat?
 */

#include <stdio.h>

int main()
{
    int m;
    scanf("%d", &m);
    if (m >= 1000)
    {
        printf("Three Kacchi");
    }
    else if (m >= 500)
    {
        printf("One Large Pizza");
    }
    else if (m < 500 && m >= 250)
    {
        printf("Three Small Burger");
    }
    else if (m >= 100)
    {
        printf("Three Fuchka");
    }
    else
    {
        printf("Nothing");
    }
    return 0;
}