//
// Created by jason on 2022/1/13.
//

#include "bitcounter.h"
#include <bitset>
#include <iostream>

int bitCounter(int number) {
    if (number > INT32_MIN && number < INT32_MAX) {
        int count = 0;
        std::string str = std::bitset<32>(number).to_string();
        for (auto c: str) {
            if (c == '1') {
                count++;
            }
        }
        std::cout << str << std::endl;

        return count;
    }
    return -1;
}

void runBitCounter() {
    auto ret = bitCounter(5);
    std::cout << "count = " << ret << std::endl;
}

