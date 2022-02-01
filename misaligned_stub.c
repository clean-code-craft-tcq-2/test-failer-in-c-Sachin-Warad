#include "misaligned.h"

int ManualIndex = 1;

void testColorManual(int MajorColorNumber, int MinorColorNumber) {
      Manual[ManualIndex].pairNumber = (MajorColorNumber*5)+MinorColorNumber+1;
      strcpy(Manual[ManualIndex].MajorColor, majorColor[MajorColorNumber]);
      strcpy(Manual[ManualIndex].MinorColor, minorColor[MinorColorNumber]);
      ManualIndex++;
}
