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
public:
    TreeNode* searchBST(TreeNode* root, int val) {  
     // Iterative approach   
        TreeNode* curr = root;
        while(curr != NULL) {
            if(root == NULL) return NULL;
            else if(curr->val == val) return curr;
            else if(curr->val < val) curr = curr->right;
            else curr = curr->left;
        }
        return NULL;
    
    // Recursive approach
        // if(root == NULL) return NULL;
        // else if(root->val == val) return root;
        // else if(root->val < val) return searchBST(root->right, val);
        // else return searchBST(root->left, val);
        // return NULL;
    }
    
};
