//
// Created by jason on 2022/1/13.
//

#include <algorithm>
#include <iostream>
#include "reverseString.h"

std::string reverseString(const std::string &str) {

    if (checkLowerCase(str) && str.length() <= 1000) {
        std::string ret = str;
        std::reverse(ret.begin(), ret.end());
        return ret;
    }
    return "";
}

bool checkLowerCase(const std::string &str) {
    std::string criteria = "abcdefghijklmnopqrstuvwxyz";
    return (std::string::npos == str.find_first_not_of(criteria));
}

void runReverseString() {
    std::string str = "abcdefg";
    std::cout << reverseString(str) << std::endl;
}
