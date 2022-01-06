//
// Created by jason on 2022/1/6.
//

#ifndef DATASTRUCTURE_BTREE_H
#define DATASTRUCTURE_BTREE_H

#include <iostream>
#include "traverseBtree.h"


TreeNode *initialBtree();

void printVector(const std::vector<int>& vector);

void iterRun(TreeNode *btree);

void inDepthRun(TreeNode *btree);

#endif //DATASTRUCTURE_BTREE_H
