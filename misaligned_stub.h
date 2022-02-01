#include "misaligned.h"
#include <assert.h>
#include <string.h>

struct ColorCode
{
    int pairNumber;
    char MajorColor[15];
    char MinorColor[15];
};

void testColorManual(int MajorColorNumber, int MinorColorNumber);
