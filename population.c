#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Getting start size
    int x;
    do
    {
        x = get_int("Start size: ");
    }
    while (x < 9);
    // Getting end size
    int y;
    do
    {
        y = get_int("End size: ");
    }
    while (x > y);
    // Calculating end size
    int year = 0;
    while (x < y)
    {
        x = x + (x / 3) - (x / 4);
        year++;
    }
    // Printing end size and year
    printf("Years: %i\n", year);
}
