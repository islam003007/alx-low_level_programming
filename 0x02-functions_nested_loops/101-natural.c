#include "main.h"

/**
 * main - entry point
 * 
 * Return: 0 (success)
*/
int main(void)
{
    int i, sum;

    sum = 0;
    for (i = 0; i < 1024; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
            continue;
        }
        if (i % 5 == 0)
        {
            sum += i;
            continue;
        }
    }
    puts("");
}
