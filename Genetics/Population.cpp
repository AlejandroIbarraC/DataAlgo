//
// Created by fabian on 08/05/19.
//

#include "Population.h"

void Population::initializePopulation(int total) {
    for(int i = 0; i < total; i++){
     individuals.push_back(new Individual());
    }
}

Population::Population() {

}

void Population::crossOver() {
    std::vector<int> newGens;
    int crossOverPoint = 2;
    int actualIndividual = 0;
    for (int i = 0; i<5; i++){
        if(i==crossOverPoint){
            actualIndividual++;
        }
        newGens.push_back(individuals[actualIndividual]->gens[i]);
    }
    Individual *individual = new Individual();
    individual->gens = newGens;
    individuals.push_back(individual);
}
