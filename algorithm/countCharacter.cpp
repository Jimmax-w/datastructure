//
// Created by jason on 2022/1/13.
//

#include "countCharacter.h"
#include <set>
#include <iostream>
#include <vector>

int countCharacter(std::string &str) {
    std::vector<char> vector(str.begin(), str.end());
    std::set<char> set(vector.begin(), vector.end());
    vector.assign(set.begin(), set.end());
    int count = 0;
    for (char i: vector) {
        if (int(i) >= 0 && int(i) <= 127) {
            count++;
        }
    }
    return (count >= 1) && (count <= 500) ? count : 0;
}

void runCountCharacter() {
    std::string str = "aaabbbcccedfgh%";
    std::cout << countCharacter(str) << std::endl;
}
