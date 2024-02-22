//
// Created by Desktop-1 on 2/19/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "imgMaker.h"

double calDist(pos postion1, int x, int y);

objCol* makeTestObj(int cirkelAmount, int squareAmount, int max, int min, int size){
    objCol* objs = malloc(sizeof (objCol*));
    objs->amount = cirkelAmount+squareAmount;
    objs->obj = malloc(sizeof(imgOfObject)*objs->amount);

    srand(time(NULL));

    for (int i = 0; i < cirkelAmount; ++i) {
        objs->obj[i].img = makeMatrix(size);
        int ran=rand() % (max-min)+min;
        printf("%d ",ran);
        objs->obj[i] = makeCircle(ran, objs->obj[i].img, (pos){size/2,size/2}, size);
    }
    for (int i = cirkelAmount; i < objs->amount; ++i) {
        objs->obj[i].img = makeMatrix(size);
        int ran=rand() % (max-min)+min;
        printf("%d ",ran);
        objs->obj[i] = makeSquare(ran, objs->obj[i].img, (pos){(int)size/2,(int)size/2}, size);
    }

    return objs;
}

/// Function to make a matrix of size size
int **makeMatrix(int size){
    int **matrix = malloc(sizeof (int*) * size);
    for (int i = 0; i < size; ++i)
        matrix[i] = malloc(sizeof (int*) * size);

    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size; ++j)
            matrix[i][j] = 0;

    return matrix;
}

imgOfObject makeCircle(int radius, int** matrix,pos center, int size){
    //printf("here %d %d %d %d",center.x,center.y, radius, size);
    for (int i = center.x-radius<0?0:center.x-radius; i <= center.x+radius && i<size; ++i)
        for (int j = center.y-radius<0?0:center.y-radius; j <= center.y+radius && j<size; ++j)
            if ((calDist(center, i, j)) <= (double) radius)
                matrix[i][j] = 1;

    imgOfObject object;
    object.img = matrix;
    object.type = 1;
    return object;
}

imgOfObject makeSquare(int radius, int** matrix,pos center, int size){
    for (int i = center.x-radius<0?0:center.x-radius; i <= center.x+radius && i<size; ++i)
        for (int j = center.y - radius < 0 ? 0 : center.y - radius; j <= center.y + radius && j < size; ++j)
            matrix[i][j] = 1;

    imgOfObject object;
    object.img = matrix;
    object.type = 2;
    return object;
}

/// Function to calculate the distance between to points
double calDist(pos postion1, int x, int y){
    return sqrt((postion1.x-x)*(postion1.x-x)+(postion1.y-y)*(postion1.y-y));
}


