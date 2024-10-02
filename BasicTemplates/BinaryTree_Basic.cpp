#include<bits/stdc++.h>
using namespace std;
class TreeNode{
	public:
	int value;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int val){
		value = val;
		left = NULL;
		right = NULL;
	}
};
void printBinaryTree(struct TreeNode* root){
	if(root == NULL){
		return;
	}
	printBinaryTree(root->left);
	cout<<root->value<<" ";
	printBinaryTree(root->right);
}
int main(){
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	printBinaryTree(root);
	return 0;
}
