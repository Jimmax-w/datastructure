//
// Created by jason on 2022/1/13.
//

#include <iostream>
#include <algorithm>
#include <sstream>
#include "reverseNumber.h"


std::string reverseNumber(int num) {
    long long ret;
    std::string str = std::to_string(num);
    int pos = str.find_first_not_of('-');
    std::reverse(str.begin() + pos, str.end());
    std::istringstream out(str);
    out >> ret;
    if (ret > INT32_MAX || ret < INT32_MIN) {
        return std::to_string(0);
    } else {
        return str;
    }
}

void run() {
    auto str = reverseNumber(12340000);
    std::cout << str << std::endl;
}
