//
// Created by jason on 2022/1/6.
//

#include "traverseBtree.h"
#include <queue>
#include <stack>
#include <algorithm>


void freeTree(TreeNode *node) {
    if (node == nullptr) {
        return;
    }
    if (node->lchild != nullptr) {
        freeTree(node->lchild);
    }
    if (node->rchild != nullptr) {
        freeTree(node->rchild);
    }
    delete node;
}

std::vector<int> level(TreeNode *node) {
    std::queue<TreeNode *> queue;  //FIFO, 先進先出
    queue.push(node);
    std::vector<int> result;
    while (!queue.empty()) {
        auto curr = queue.front();
        result.push_back(curr->val);
        if (curr->lchild != nullptr) {
            queue.push(curr->lchild);
        }
        if (curr->rchild != nullptr) {
            queue.push(curr->rchild);
        }
        queue.pop();
    }
    return result;
}

void preTraverse(TreeNode *node, std::vector<int> &res) {
    if (node == nullptr) {
        return;
    }
    res.push_back(node->val);
    if (node->lchild != nullptr) {
        preTraverse(node->lchild, res);

    }
    if (node->rchild != nullptr) {
        preTraverse(node->rchild, res);
    }
}

void postTraverse(TreeNode *node, std::vector<int> &res) {
    if (node == nullptr) {
        return;
    }
    if (node->lchild != nullptr) {
        postTraverse(node->lchild, res);
    }
    if (node->rchild != nullptr) {
        postTraverse(node->rchild, res);
    }
    res.push_back(node->val);
}

void middleTraverse(TreeNode *node, std::vector<int> &res) {
    if (node == nullptr) {
        return;
    }
    if (node->lchild != nullptr) {
        middleTraverse(node->lchild, res);
    }
    res.push_back(node->val);
    if (node->rchild != nullptr) {
        middleTraverse(node->rchild, res);
    }
}

std::vector<int> preTraverseIt(TreeNode *node) {
    std::vector<int> res;
    std::stack<TreeNode *> stack;
    TreeNode *tmp = nullptr;
    auto curr = node;
    while (curr != nullptr || !stack.empty()) {
        while (curr != nullptr) {
            res.push_back(curr->val);
            stack.push(curr);
            curr = curr->lchild;
        }
        tmp = stack.top();
        curr = tmp->rchild;
        stack.pop();
    }
    return res;
}

std::vector<int> preTraverseIt2(TreeNode *node) {
    std::vector<int> res;
    std::stack<TreeNode *> stack;
    stack.push(node);
    while (!stack.empty()) {
        auto curr = stack.top();
        res.push_back(curr->val);
        stack.pop();
        if (curr->rchild != nullptr) {
            stack.push(curr->rchild);
        }
        if (curr->lchild != nullptr) {
            stack.push(curr->lchild);
        }
    }
    return res;
}

std::vector<int> postTraverseIt(TreeNode *node) {
    std::vector<int> res;
    std::stack<TreeNode *> stack;
    TreeNode *temp = nullptr;
    auto curr = node;
    while (curr != nullptr || !stack.empty()) {
        while (curr != nullptr) {
            res.push_back(curr->val);
            stack.push(curr);
            curr = curr->rchild;
        }
        temp = stack.top();
        curr = temp->lchild;
        stack.pop();
    }
    std::reverse(res.begin(), res.end());
    return res;
}

std::vector<int> postTraverseIt2(TreeNode *node) {
    std::vector<int> res;
    std::stack<TreeNode *> stack;
    stack.push(node);
    while (!stack.empty()) {
        auto curr = stack.top();
        res.push_back(curr->val);
        stack.pop();
        if (curr->lchild != nullptr) {
            stack.push(curr->lchild);
        }
        if (curr->rchild != nullptr) {
            stack.push(curr->rchild);
        }
    }
    std::reverse(res.begin(), res.end());
    return res;
}


std::vector<int> inOrderTraverseIt(TreeNode *node) {
    std::vector<int> res;
    std::stack<TreeNode *> stack;
    TreeNode *temp = nullptr;
    auto curr = node;
    while (curr != nullptr || !stack.empty()) {
        while (curr != nullptr) {
            stack.push(curr);
            curr = curr->lchild;
        }
        temp = stack.top();
        res.push_back(temp->val);
        if(temp->rchild != nullptr){
            curr = temp->rchild;
        }
        stack.pop();
    }
    return res;
}

