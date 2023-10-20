#include <stdio.h>

int isPrime (int input)
{
    for(int i = 2; i < (input-1); i++)
    {
        if(input % i == 0)
        {
            return 0;
            //printf("can be divided by %d", i);
        }
    }
    return 1;
}

int main () 
{
    int number = 20;
    if(isPrime(number) == 0)
    {
        printf("is not prime");
    }
    else
    {
        printf("is prime");
    }
    return 0;
}