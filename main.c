#include <stdio.h>

int main()
{
    char star = '*';
    short int numLines = 10;

    for (int i = 0; i < numLines; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            printf("%c", star);
        }
        printf("\n");
    }

    return 0;
}
