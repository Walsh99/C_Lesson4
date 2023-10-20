#include <stdio.h>

int str_len (char input [100])
{
    int i = 0;
    while(input[i] != '\0')
    {
        //printf("%c", input[i]);
        i++;
    }
    return i;
}

int main () 
{
    printf("%d\n",str_len("hello"));
    return 0;
}