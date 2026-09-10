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
class Solution {
    int countnodes(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=countnodes(root->left);
        int right=countnodes(root->right);
        return 1+left+right;
    }
    int sum(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=sum(root->left);
        int right=sum(root->right);
        int ans=root->val+left+right;
        return ans;
    }
    int traversal(TreeNode* root,int &count){
        if(root==NULL){
            return 0;
        }
        int ans=sum(root);
        int nodes=countnodes(root);
        ans=ans/nodes;
        if(root->val==ans){
            count++;
        }
        int lc=traversal(root->left,count);
        int rc=traversal(root->right,count);
        return count;
    }
public:
    int averageOfSubtree(TreeNode* root) {
        int count=0;
        int ans=traversal(root,count);
        return ans;
    }
};