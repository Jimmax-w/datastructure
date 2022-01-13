//
// Created by jason on 2022/1/12.
//

#include <iostream>
#include "singleNumber.h"

int singleNumber(std::vector<int> &arr) {
    auto ret = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        ret = (ret ^ arr[i]);
    }
    return ret;
}

void run_singleNumber() {
    std::vector<int> arr = {1, 1, 1, 1, 3, 3, 4, 5, 5, 7, 7, 7, 7, 7};
    std::cout << singleNumber(arr) << std::endl;
}

