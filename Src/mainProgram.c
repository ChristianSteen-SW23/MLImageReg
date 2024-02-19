#include <stdio.h>

#include "imgMaker.h"

int main() {
    printf("Hello, World!\n");
    imgOfObject test;
    test.img= makeMatrix(15);

    pos pos1 = {6,6};
    test = makeCircle(1, test.img, pos1,15);
    test.img[6][6]=2;
    for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < 15; ++j) {
            printf("%d ",test.img[i][j]);
        }
        printf("\n");
    }
    return 0;
}



