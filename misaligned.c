#include <stdio.h>
#include <assert.h>

void printOnConsole(int MajorColorNumber, int MinorColorNumber);

int printColorMap() {
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printOnConsole(i,j);
        }
    }
    return i * j;
}
void printOnConsole(int MajorColorNumber, int MinorColorNumber)
{
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    printf("%d | %s | %s\n", MajorColorNumber * 5 + MinorColorNumber, majorColor[MajorColorNumber], minorColor[MajorColorNumber]);
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
