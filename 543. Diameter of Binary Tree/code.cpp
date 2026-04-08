/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

///OPTIMISED SOLUTION

class Solution {
public:
    int ans = 0;
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int leftHT = height(root->left);
        int rightHT = height(root->right);
        int currDiam = leftHT + rightHT;
        ans = max(ans, currDiam);
        return max(leftHT , rightHT) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);        

        return  ans;
    }
};




/// NORMAL APPROCH

class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int leftHT = height(root->left);
        int rightHT = height(root->right);
        return max(leftHT , rightHT) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }

        int leftDiam = diameterOfBinaryTree(root->left);
        int rightDiam = diameterOfBinaryTree(root->right);
        int currDiam = height(root->left) + height(root->right);

        return max(currDiam, max(leftDiam, rightDiam));
    }
};
