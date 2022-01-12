//
// Created by jason on 2022/1/12.
//

#include <functional>
#include <iostream>
#include <queue>
#include "maxHeapSort.h"

void buildMaxHeap(std::vector<int> &arr, int n) {
    for (int i = n / 2 - 1; i >= 0; --i) {
        maxHeapSort(arr, i, n);
    }
}

void maxHeapSort(std::vector<int> &arr, int k, int n) {
    int lchild = 2 * k + 1;
    int rchild = 2 * k + 2;
    int largest = k;

    if (lchild < n && arr[lchild] > arr[largest]) {
        largest = lchild;
    }
    if (rchild < n && arr[rchild] > arr[largest]) {
        largest = rchild;
    }
    if (largest != k) {
        std::swap(arr[largest], arr[k]);
        maxHeapSort(arr, largest, n);
    }
}

void doSort() {
    std::vector<int> arr = {15, 17, 19, 13, 22, 16, 28, 30, 41, 62};
    buildMaxHeap(arr, static_cast<int>(arr.size()));
    for (auto i: arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

// 底層使用堆排序，隊首元素永遠最大。
void sortByPriorityQueue() {
    std::vector<int> arr = {15, 17, 19, 13, 22, 16, 28, 30, 41, 62};
    std::priority_queue<int, std::vector<int>, std::less<>> arrs{arr.cbegin(), arr.cend()};
    while (!arrs.empty()) {
        std::cout << arrs.top() << " ";
        arrs.pop();
    }
    std::cout << std::endl;
}

