
class Solution {
    bool helper(TreeNode* root,TreeNode* max,TreeNode* min){
        if(root==NULL) return true;
        if(max!=NULL &&  root->val>=max->val){
            return false;
        }
        if(min!=NULL && root->val <=min->val){
            return false;
        }
        return helper(root->left,min,root) && helper(root->right,root,max);
    }
public:
    bool isValidBST(TreeNode* root) {
        return helper(root,NULL,NULL);
    }
};
