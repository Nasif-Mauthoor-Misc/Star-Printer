#include "shapes.h"

int main()
{
    const char star = '*';
    const char space = ' ';
    const short int numLines = 10;

    printf("Isosceles triangle with tip pointing to the right.\n");
    rightPointTriangle(star, space, numLines);

    printf("Isosceles triangle with tip pointing to the left.\n");
    leftPointTriangle(space, star, numLines);

    return 0;
}

