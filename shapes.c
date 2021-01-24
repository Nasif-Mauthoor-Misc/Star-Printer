//
// Created by Nasif on 1/17/2021.
//

#include "shapes.h"

void topHyp(char char1, char char2, int numLines)
{
    for (int i = 0; i < numLines; ++i)
    {
        for (int j = 0; j < numLines - i; ++j)
        {
            printf("%c", char1);
        }
        for (int j = 0; j < i; ++j)
        {
            printf("%c", char2);
        }
        printf("\n");
    }
}

void bottomHyp(char char1, char char2, int numLines)
{
    for (int i = numLines; i > 0; --i)
    {
        for (int j = 0; j < numLines - i; ++j)
        {
            printf("%c", char1);
        }
        for (int j = 0; j < i; ++j)
        {
            printf("%c", char2);
        }
        printf("\n");
    }
}

void rightPointTriangle(char char1, char char2, int numLines)
{
    bottomHyp(char1, char2, numLines);
    topHyp(char1, char2, numLines);
}

void leftPointTriangle(char char1, char char2, int numLines)
{
    topHyp(char1, char2, numLines);
    bottomHyp(char1, char2, numLines);
}

void topPointTriangle(char char1, char char2, int numLines)
{
    for (int i = 0; i < numLines; ++i)
    {
        printf("\n");
    }
}

void bottomPointTriangle(char char1, char char2, int numLines)
{

}