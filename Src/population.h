#ifndef UNTITLED2_POPULATION_H
#define UNTITLED2_POPULATION_H

typedef struct {
    double **indDNA;
    int **indScore;
    int gen;
    int popSize;
    int picSize;
}pop;

pop* startPop(int popSize, int picSize, int DNArange);

#endif //UNTITLED2_POPULATION_H
