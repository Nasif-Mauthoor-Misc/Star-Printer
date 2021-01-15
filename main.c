#include <stdio.h>

int main()
{
    const char star = '*';
    const short int numLines = 10;

    for (int i = 0; i < numLines; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            printf("%c", star);
        }
        printf("\n");
    }

    for (int i = numLines-1; i > 0; --i)
    {
        for (int j = i; j > 0; --j)
        {
            printf("%c", star);
        }
        printf("\n");
    }

    return 0;
}
