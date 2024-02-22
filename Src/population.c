#include <stdlib.h>
#include <time.h>

#include "population.h"

void makeNewPop(pop* pop, int DNArange);
void makeNewInd(pop* pop, int index, int DNArange);

/// Starts a new population
pop* startPop(int popSize, int picSize, int DNArange){
    pop* new = malloc(sizeof (pop*));
    new->picSize = picSize;
    new->popSize = popSize;
    new->indDNA = malloc(sizeof (double*)*popSize);
    new->gen = 1;

    makeNewPop(new, DNArange);

    return new;
}

/// Makes all of the ind is the new pop
void makeNewPop(pop* pop, int DNArange){
    //srand(time(NULL));
    for (int i = 0; i < pop->popSize; ++i) {
        pop->indDNA[i] = malloc(sizeof (double)*pop->picSize*pop->picSize);
        makeNewInd(pop, i, DNArange);
    }
}

/// Makes a single ind in the pop
void makeNewInd(pop* pop, int index, int DNArange){
    int size = pop->picSize*pop->picSize;
    for (int i = 0; i < size; ++i) {
        pop->indDNA[index][i] = rand() % (2*DNArange) - DNArange;
    }
}