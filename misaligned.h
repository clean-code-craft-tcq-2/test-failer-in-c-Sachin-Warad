#include <stdio.h>
#include <assert.h>
#include <string.h>

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

struct ColorCode
{
    int pairNumber;
    char MajorColor[15];
    char MinorColor[15];
};

void testColorManual(int MajorColorNumber, int MinorColorNumber);
void printOnConsole(int MajorColorNumber, int MinorColorNumber);
