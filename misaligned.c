#include "misaligned.h"
#include "misaligned_stub.h"

int ManualIndex = 1;

int printColorMap(void (*Fn_Ptr_ReferenceManual)(int,int)) {
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            Fn_Ptr_ReferenceManual(i,j);
        }
    }
    return i * j;
}

void testColorManual(int MajorColorNumber, int MinorColorNumber) {
      Manual[ManualIndex].pairNumber = (MajorColorNumber*5)+MinorColorNumber+1;
      strcpy(Manual[ManualIndex].MajorColor, majorColor[MajorColorNumber]);
      strcpy(Manual[ManualIndex].MinorColor, minorColor[MinorColorNumber]);
      ManualIndex++;
}

void printOnConsole(int MajorColorNumber, int MinorColorNumber)
{
    printf("%d | %s | %s\n", MajorColorNumber * 5 + MinorColorNumber + 1, majorColor[MajorColorNumber], minorColor[MajorColorNumber]);
}

int main() {
    void (*Fn_Ptr_ReferenceManual)(int,int);
    Fn_Ptr_ReferenceManual = &testColorManual;
    int result = printColorMap(Fn_Ptr_ReferenceManual);
    assert(result == 25);
    assert(Manual[2].pairNumber == 2);
    assert(strcmp(Manual[2].MajorColor,"White") == 0);
    assert(strcmp(Manual[2].MinorColor,"Orange") == 0);
    printf("All is well (maybe!)\n");
    return 0;
}
