#include <stdio.h>
#include <assert.h>

char size(int cms) {
    char sizeName = '\0';
    if(cms <= 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms <= 42) {
        sizeName = 'M';
    } else if(cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

void testTshirtsSize(int sizeInCms, char sizeInChar){
    assert(size(sizeInCms)===sizeInChar);
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
