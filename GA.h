//
// Created by Mark Hsu on 2019-07-08.
//

#define GENERATION 5000
#define POPULATION_SIZE 4
#define GENE_LENGTH 100
#define MUTATION_RATE 20 // percentage, e.g., 10 stands for  10%
#define CROSSOVER_RATE 50
#define KNAPSACK_SIZE 275 // number of max knapsack size
#define ALPHA 10 // punishment coefficient
#define DEBUG_MODE 0

typedef struct tag_parent_t {
    int gene[GENE_LENGTH];
    int weight;
    int value;
    int fitness;
} parent_t;

const char name[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
const int weight[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
const int value[10] = {6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

void init();

void calcFitness(parent_t *x);

void selectTournament();

void selectRW();

void crossoverSP();

void crossoverMP();

void crossoverMask();

void mutateSP();

void mutateMP();

void showState();

void showResult();

int *getResultCnt();

parent_t *getResult();

int myRandom(int, int);