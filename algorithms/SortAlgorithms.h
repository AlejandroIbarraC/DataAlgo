//
// Created by Alejandro Ibarra on 2019-05-06.
//

#ifndef DATA_ALGO_SORTALGORITHMS_H
#define DATA_ALGO_SORTALGORITHMS_H


class SortAlgorithms {

public:

    static void quickSort(int array[], int start, int end);

private:

    static int partition (int array[], int start, int end);

    static void swap(int* a, int* b);

};


#endif //DATA_ALGO_SORTALGORITHMS_H
