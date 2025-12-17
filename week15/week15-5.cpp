//week15-5.cpp
//LeetCode 104. Maximum Depth of Binary Tree
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr)return 0;//終止條件 什麼都沒有
        int left = maxDepth(root->left);//函式呼叫函式
        int right = maxDepth(root->right);//函式呼叫函式
        return max(left, right) + 1;//再加一層樓
    }
};
