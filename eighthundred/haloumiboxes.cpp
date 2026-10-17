bool isBalanced(TreeNode* root){
    if(root==NULL){
        return;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    if(abs(leftHeight - rightHeight) > 1){
        return false;
    }
    return 1+max(leftHeight, rightHeight);
}
        