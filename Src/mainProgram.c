#include <stdio.h>

#include "imgMaker.h"
#include "population.h"

int main() {
    printf("Hello, World!\n");
    /*imgOfObject test;
    test.img= makeMatrix(15);

    pos pos1 = {6,6};
    test = makeCircle(1, test.img, pos1,15);
    test.img[6][6]=2;
    for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < 15; ++j) {
            printf("%d ",test.img[i][j]);
        }
        printf("\n");
    }*/
    /*pop* poptest = startPop(5,2,10);
    for (int i = 0; i < 4; ++i) {
        printf("\n\nind: %d\n",i);
        for (int j = 0; j < 4; ++j) {
            printf("%lf, ",poptest->indDNA[i][j]);
        }

    }*/

    objCol* objtest = makeTestObj(4,4,5,4,21);

    for (int i = 0; i < 8; ++i) {
        printf("\n\nobj= %d\n",i);
        for (int j = 0; j < 21; ++j) {
            for (int k = 0; k < 21; ++k) {
                printf("%d ",objtest->obj[i].img[j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}



