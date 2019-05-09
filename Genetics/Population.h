//
// Created by fabian on 08/05/19.
//

#ifndef DATA_ALGO_POPULATION_H
#define DATA_ALGO_POPULATION_H

#include "vector"
#include "Individual.h"


class Population {
public:
    std::vector<Individual*> individuals;
    void initializePopulation(int i);
    void crossOver();
    Population();

};


#endif //DATA_ALGO_POPULATION_H
