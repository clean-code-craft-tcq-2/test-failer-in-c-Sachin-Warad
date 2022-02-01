#include "misaligned.h"

ColorCode Manual[25];
int index = 1;

void testColorManual(int MajorColorNumber, int MinorColorNumber) {
      Manual[index].pairNumber = (i*5)+j+1;
      strcpy(Manual[index].MajorColor, majorColor[i]);
      strcpy(Manual[index].MinorColor, minorColor[j]);
      index++;
}
