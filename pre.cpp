int Bsize(struct TreeNode *root)
{
  if(root == NULL)
  return 0;
  return Bsize(root->left)+Bsize(root->right)+1;
}
void preorder(struct TreeNode* root, int* a, int* pi)
{
 
}
int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
 
}
