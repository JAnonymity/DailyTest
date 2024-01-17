struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool check(struct TreeNode* TreeA,struct TreeNode* TreeB) {
    if(!TreeA&&!TreeB)return true;
    if(!TreeA||!TreeB)return false;
    return check(TreeA->left,TreeB->right)&&check(TreeA->right,TreeB->left)&&TreeA->val==TreeB->val;
}

bool isSymmetric(struct TreeNode* root){
    return check(root,root);
}