
#include<stdio.h>
#include<iostream> 

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  };

int heightOfTree(TreeNode *root) {
  if (root == nullptr) {
    return 0;
  } 
  return std::max(heightOfTree(root->left), heightOfTree(root->right) ) + 1;
}
int main() {
    TreeNode root(1);
    root.left = new TreeNode(2);
    root.right = new TreeNode(3);
    root.left->left = new TreeNode(4);
    std::cout << heightOfTree(&root) << std::endl;
    return 0;
}