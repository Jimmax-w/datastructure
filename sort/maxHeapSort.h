//
// Created by jason on 2022/1/12.
//

#ifndef DATASTRUCTURE_MAXHEAPSORT_H
#define DATASTRUCTURE_MAXHEAPSORT_H

#include <vector>

void buildMaxHeap(std::vector<int> &arr, int n);

void maxHeapSort(std::vector<int> &arr, int k, int n);

// 方法二
void sortByPriorityQueue();

void doSort();
#endif //DATASTRUCTURE_MAXHEAPSORT_H
