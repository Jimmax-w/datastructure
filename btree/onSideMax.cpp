//
// Created by jason on 2022/1/12.
//

#include "onSideMax.h"

int ans = INT32_MIN;

int oneSideMax(TreeNode *root) {
    if (root == nullptr) {
        return 0;
    }
    int left = std::max(0, oneSideMax(root->lchild));
    int right = std::max(0, oneSideMax(root->rchild));
    ans = std::max(ans, left + right + root->val);

    return std::max(left, right) + root->val;

}

void run_oneSideMax() {
    auto root = initialBtree();
    std::cout << oneSideMax(root) << std::endl;
}
