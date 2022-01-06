//
// Created by jason on 2022/1/6.
//

#ifndef DATASTRUCTURE_TRAVERSEBTREE_H
#define DATASTRUCTURE_TRAVERSEBTREE_H


#include <vector>

class TreeNode {
public:
    TreeNode *lchild;
    TreeNode *rchild;
    int val;
};

std::vector<int> level(TreeNode *node);

// In-depth Traversal
void preTraverse(TreeNode *node, std::vector<int> &res);

void postTraverse(TreeNode *node, std::vector<int> &res);

void middleTraverse(TreeNode *node, std::vector<int> &res);

// Iterative Traversal
std::vector<int> preTraverseIt(TreeNode *node);

std::vector<int> preTraverseIt2(TreeNode *node);

std::vector<int> postTraverseIt(TreeNode *node);

std::vector<int> postTraverseIt2(TreeNode *node);

std::vector<int> inOrderTraverseIt(TreeNode *node);

void freeTree(TreeNode *node);


#endif //DATASTRUCTURE_TRAVERSEBTREE_H
