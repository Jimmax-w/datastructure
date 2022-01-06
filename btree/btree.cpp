//
// Created by jason on 2022/1/6.
//

#include "btree.h"

TreeNode *initialBtree() {
    auto *node = new TreeNode;
    node->val = 1;
    node->lchild = new TreeNode;
    node->lchild->val = 2;
    node->rchild = new TreeNode;
    node->rchild->val = 3;
    node->lchild->lchild = new TreeNode;
    node->lchild->lchild->val = 4;
    node->lchild->rchild = new TreeNode;
    node->lchild->rchild->val = 5;
    node->rchild->lchild = new TreeNode;
    node->rchild->lchild->val = 6;
    node->rchild->rchild = new TreeNode;
    node->rchild->rchild->val = 7;

    return node;
}

void printVector(const std::vector<int> &vector) {
    for (auto i: vector) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void inDepthRun(TreeNode *btree) {
    std::cout << "------------- In-depth Traversal ---------------" << std::endl;
    std::cout << "Pre-Traversal: ";
    std::vector<int> pre;
    preTraverse(btree, pre);
    printVector(pre);

    std::cout << "Post-Traversal: ";
    std::vector<int> post;
    postTraverse(btree, post);
    printVector(post);

    std::cout << "In-order Traversal: ";
    std::vector<int> inOrder;
    inOrderTraverse(btree, inOrder);
    printVector(inOrder);

}

void iterRun(TreeNode *btree) {
    std::cout << "Level Traversal: ";
    printVector(level(btree));
    std::cout << std::endl;

    std::cout << "------------- Iterative Traversal ---------------" << std::endl;

    std::cout << "Pre-Traversal: ";
    printVector(preTraverseIt(btree));

    std::cout << "Pre-Traversal2: ";
    printVector(preTraverseIt2(btree));

    std::cout << "Post-Traversal: ";
    printVector(postTraverseIt(btree));

    std::cout << "Post-Traversal2: ";
    printVector(postTraverseIt2(btree));

    std::cout << "In-order Traversal: ";
    printVector(inOrderTraverseIt(btree));

}

