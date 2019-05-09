//
// Created by fabian on 08/05/19.
//

#include <vector>
#ifndef DATA_ALGO_INDIVIDUAL_H
#define DATA_ALGO_INDIVIDUAL_H


class Individual {

public:
    std::vector<int> gens;
    int genLenght = 5;
    void showGens();
    void mutate();
    Individual();
};


#endif //DATA_ALGO_INDIVIDUAL_H
