#include <stdio.h>

float circle_area (float r)
{
    float pi = 3.14;
    return pi * r * r;
}

int main () 
{
    printf("area of circle is: %f\n", circle_area(5));
    return 0;
}