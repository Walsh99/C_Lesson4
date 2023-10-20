#include <stdio.h>
#include <string.h>

char *concatStrings(char *string1, char *string2)
{
    static char finalresult[40];

    for (int x = 0; x < strlen(string1); x++)
    {
        finalresult[x] = string1[x];
    }

    int count = 0;
    for (int i = strlen(string1); i < strlen(string1) + strlen(string2); i++)
    {
        finalresult[i] = string2[count];
        count++;
    }
    return finalresult;
}

int main()
{
    printf("%s", concatStrings("hello", "world"));
    return 0;
}