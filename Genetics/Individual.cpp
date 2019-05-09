//
// Created by fabian on 08/05/19.
//

#include <cstdlib>
#include "Individual.h"
#include "iostream"
using namespace std;

Individual::Individual() {


    for (int i = 0; i<genLenght; i++){
        gens.push_back(rand()%2);
    }

}

void Individual::showGens() {
    gens.shrink_to_fit();
    for (auto it = gens.begin(); it != gens.end(); it++)
        cout << *it << " ";
    cout<<endl;
}

void Individual::mutate() {
    int i = rand()%5;
    if(gens[i] == 1){
        gens[i] = 0;
    }else{
        gens[i] = 1;
    }
}

