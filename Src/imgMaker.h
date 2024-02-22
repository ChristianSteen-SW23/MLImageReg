#ifndef UNTITLED2_IMGMAKER_H
#define UNTITLED2_IMGMAKER_H

typedef struct {
    int** img;
    int type; //1=circle 2=square
    int size;
} imgOfObject;

typedef struct {
    imgOfObject* obj;
    int amount;
} objCol;

typedef struct {
    int x;
    int y;
} pos;

int **makeMatrix(int size);
imgOfObject makeCircle(int radius, int** matrix,pos center, int size);
imgOfObject makeSquare(int radius, int** matrix,pos center, int size);
objCol* makeTestObj(int cirkelAmount, int squareAmount, int max, int min, int size);

#endif