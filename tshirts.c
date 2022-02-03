#include <stdio.h>
#include <assert.h>
#include "tshirt.h"

char size(int sizeInCms) {
    char sizeName = '\0';
    if(sizeInCms <= S_UpperLimit) {
        sizeName = 'S';
    } else if(sizeInCms > M_LowerLimit && sizeInCms <= M_UpperLimit) {
        sizeName = 'M';
    } else if(sizeInCms > L_LowerLimit) {
        sizeName = 'L';
    }
    return sizeName;
}

void testTshirtsSize(int sizeInCms, char sizeInChar){
    assert(size(sizeInCms) == sizeInChar);
}

int main() {
    testTshirtsSize(37, 'S');
    testTshirtsSize(40, 'M');
    testTshirtsSize(43, 'L');
    testTshirtsSize(38, 'S');
    testTshirtsSize(42, 'M');
    printf("All is well (maybe!)\n");
    return 0;
}
