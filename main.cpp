//
// Created by jason on 2022/1/6.
//

#include "btree.h"


int main() {
    auto btree = initialBtree();
    iterRun(btree);
    inDepthRun(btree);
    freeTree(btree);
    return 0;
}